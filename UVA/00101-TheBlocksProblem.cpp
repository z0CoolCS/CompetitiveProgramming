#include<iostream>
#include<sstream>

using namespace std;

int main(){
	
	int n;
	cin>>n;
	int arr[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j==0)
				arr[i][0]=i;
			else
				arr[i][j]=-1;

		}
	}

	string line;
	string action,action2,begin,end;
	while(getline(cin,line),line!="quit"){
		stringstream s(line);
		s>>action;
		s>>begin;
		s>>action2;
		s>>end;
		if(action=="move"){
			if(action2=="onto"){
			}
			else{
			}
		}
		else{
			if(action2=="onto"){
			}
			else{
			}
		}

	}

	

	return 0;
}
