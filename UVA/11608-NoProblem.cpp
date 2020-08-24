#include<iostream>

using namespace std;

int main(){
	int n,ind=1;;

	while(cin>>n,n>=0){
		cout<<"Case "<<ind++<<":\n";
		int created[12];
		int needed[12];
		for(int i=0;i<12;i++)
			cin>>created[i];
		for(int i=0;i<12;i++)
			cin>>needed[i];
		for(int i=0;i<12;i++){
			if(n>=needed[i]){
				n-=needed[i];
				cout<<"No problem! :D\n";
			}
			else
				cout<<"No problem. :(\n";
			n+=created[i];
		}
		
	}

	return 0;
}
