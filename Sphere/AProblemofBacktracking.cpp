#include<iostream>

using namespace std;

long long arr[10],k;
long long ans[10];
void backtracking(bool *state,long long k,bool &faro,int ind){
	
	if(ind==10){
		if(k>=0){
			faro=true;
			for(auto x:ans){
				cout<<x<<" ";
			}
		}
	}

	for(int i=0;i<10 && !faro;i++){
		if(!state[i]){
			ans[ind]=(long long)i;
			state[i]=1;
			backtracking(state,k-arr[ind]*ans[ind],faro,ind+1);
			state[i]=0;
		}
	}
}
int main(){

	int t;
	cin>>t;
	while(t--){
		for(int i=0;i<10;i++)
			cin>>arr[i];
		cin>>k;

		bool state[]={0,0,0,0,0,0,0,0,0,0};
		bool faro=false;
		backtracking(state,k,faro,0);
		if(!faro)
			cout<<-1;
		cout<<endl;
	}

	return 0;
}
