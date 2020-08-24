#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;

struct book{
	string author;
	string title;
	bool state;

	bool operator<(const book& other){
		if(other.author==author)
			return other.title>title;
		return other.author>author;
	}
};

int main(){
	string line,author,by,title;
	string state;
	vector<book> books;

	while(getline(cin,line),line!="END"){
		int posby=line.find("by");
		title=line.substr(0,posby-1);
		author=line.substr(posby+3,line.size());
		book b{author,title,false};
		books.push_back(b);

	}
	sort(books.begin(),books.end());
	unordered_map<string,int> dict;

	for(int i=0;i<books.size();i++)
		dict[books[i].title]=i;
	
	vector<book> borrows;

	while(getline(cin,line),line!="END"){
		int posspace=line.find(" ");
		state=line.substr(0,posspace);
		if(state=="BORROW"){
			title=line.substr(state.size()+1,line.size());
			books[dict[title]].state=true;
		}
		else if(state=="RETURN"){
			title=line.substr(state.size()+1,line.size());
			book b{books[dict[title]].author,title,true};
			borrows.push_back(b);
		}
		else{
			sort(borrows.begin(),borrows.end());
			for(int i=0;i<borrows.size();i++){
				int pos=dict[borrows[i].title];
				books[pos].state=false;
				do
					pos--;
				while(pos>=0 && books[pos].state);

				if(pos>=0)
					cout<<"Put "<<borrows[i].title<<" after "<<books[pos].title<<endl;
				else
					cout<<"Put "<<borrows[i].title<<" first\n";
					

				}
			cout<<"END\n";
			borrows.clear();
			}
	}
		
	return 0;
}
