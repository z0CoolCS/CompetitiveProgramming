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
				if(i>0){
					if(line[i-1]=='m' && !arr[i-1])
						continue;
					
				}
				if(i<size-1){
					if(line[i+1]=='m' && !arr[i+1]){
						arr[i+1]=1;
						continue;
					}
				}
				csnk++;
			}
			else{
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
