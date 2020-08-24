#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<algorithm>

using namespace std;

struct person{
	vector<string> dates;

	bool operator<(const person &other){
		return dates[2]<other.dates[2];
	}
};

int main(){
	int f;
	cin>>f;
	cin.ignore();
	string line;
	string department;
	string word;
	bool faro;
	vector<person> persons;
	int i;

	while(f--){
		faro=true;
		while(getline(cin,line),line!=""){
			if(faro){
				department=line;
				faro=false;
				continue;
			}
			i=0;
			stringstream ss(line);

			vector<string> dates(8,"");
			while(getline(ss,word,',')){
				dates[i]=word;
				i++;
			}
			
			dates[i]=department;
			persons.push_back(person{dates});
		}
	}

	sort(persons.begin(),persons.end());


	for(auto &c:persons){
		cout<<"----------------------------------------"<<endl;
		cout<<c.dates[0]<<" "<<c.dates[1]<<" "<<c.dates[2]<<endl;
		cout<<c.dates[3]<<endl;
		cout<<"Department: "<<c.dates[7]<<endl;
		cout<<"Home Phone: "<<c.dates[4]<<endl;
		cout<<"Work Phone: "<<c.dates[5]<<endl;
		cout<<"Campus Box: "<<c.dates[6]<<endl;
	}

	return 0;
}
