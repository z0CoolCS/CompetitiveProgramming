#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore();
	//string line;
	char line[101];
	while(t--){
		//getline(cin,line);
		cin>>line;
		//int size=line.size();
		//vector<bool> arr(0,size);
		int csnk=0,cmon=0;
		for(int i=0;line[i]!='\0';i++){
			if(line[i]=='s'){
				csnk++;
			}
			else if(line[i]=='m'){
				if(line[i-1]=='s'){
					csnk--;
					line[i]='k';
				}
				else if(line[i+1]=='s'){
					line[i]=line[i+1]='k';
				}
				cmon++;
			}
		}
		if(csnk>cmon)
			cout<<"snakes"<<endl;
		else if(csnk<cmon)
			cout<<"mongooses"<<endl;
		else 
			cout<<"tie"<<endl;
	}
	return 0;
}
