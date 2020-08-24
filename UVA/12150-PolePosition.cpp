#include<iostream>
#include<vector>

using namespace std;

int main(){

	int n;
	while(cin>>n,n){
		int cars[n];
		vector<bool> states(n,0);
		int car,oper;
		bool faro=true;
		for(int i=0;i<n;i++){
			cin>>car>>oper;
			if(i+oper<0 || i+oper>n-1)
				faro=false;
			else{
				if(!states[i+oper]){
					states[i+oper]=1;
					cars[i+oper]=car;
				}
				else
					faro=false;
			}
		}
		if(faro){
			for(int i=0;i<n;i++){
				cout<<cars[i];
				if(i!=n-1)
					cout<<" ";
			}
		}
		else
			cout<<-1;

		cout<<endl;

	}

	return 0;
}
