#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<iterator>
using namespace std;

int main(){
	int t,n,i,pos;
	int instructions[101];
	cin>>t;
	string instruction;
	while(t--){
		cin>>n;
		i=1;
		pos=0;
		cin.ignore();
		while(n--){
			getline(cin,instruction);
			if(instruction=="LEFT")
			{
				instructions[i++]=-1;
				pos--;
			}
			else if(instruction=="RIGHT")
			{
				instructions[i++]=1;
				pos++;
			}
			else{
				istringstream iss(instruction);
				vector<string> results((istream_iterator<string>(iss)),
						                                 istream_iterator<string>());
				
				int action=instructions[atoi(results[results.size()-1].c_str())];
				pos+=action;
				instructions[i++]=action;

		}

	}
		cout<<pos<<endl;
	}

	return 0;
}
