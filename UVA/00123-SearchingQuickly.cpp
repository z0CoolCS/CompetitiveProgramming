#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<algorithm>

using namespace std;

struct titles{
	string word;
	int pos;

	int posin;

	bool operator<(const titles &other){
		if(other.word==word){
			if(other.pos==pos)
				return other.posin>posin;
			return other.pos>pos;
		}
		return other.word>word;
	}

};

bool isIgnoredWord(vector<string> ig,string word,int size){
	for(int i=0;i<size;i++)
		if(ig[i]==word)
			return true;

	return false;
}
int findword(string line,string word,int posin){
	int sizel=line.size();
	int pos=-1;
	bool faro=true;

	for(int i=0;i<sizel;i++){
		if(line[i]>='a' && line[i]<='z' && faro)
		{
			pos++;
			if(pos==posin)
				return i;
			faro=false;
		}
		else if(line[i]==' ')
			faro=true;

	}
}
int main(){
	string line;
	string word;
	vector<string> ignoredwords;

	while(getline(cin,line),line!="::")
		ignoredwords.push_back(line);

	int sizew=ignoredwords.size();

	int i=0;
	int j;
	vector<titles> v;
	vector<string> t;

	while(getline(cin,line)){
		stringstream s(line);
		j=0;
		while(s>>word){
			transform(word.begin(),word.end(),word.begin(),::tolower);
			if(!isIgnoredWord(ignoredwords,word,sizew)){
				v.push_back(titles{word,i,j});
			}
			j++;
			
		}
		
		t.push_back(line);
		i++;
	}
	sort(v.begin(),v.end());
	int sizev=v.size();
	for(i=0;i<sizev;i++){

		line=t[v[i].pos];
		word=v[i].word;

		transform(line.begin(),line.end(),line.begin(),::tolower);

		int pos=findword(line,word,v[i].posin);
		
		string sub=line.substr(0,pos);
		transform(word.begin(),word.end(),word.begin(),::toupper);
		string post=line.substr(pos+word.size(),line.size());

		cout<<sub<<word<<post<<endl;
		

	}
	

	return 0;
}
