#include<bits/stdc++.h>

using namespace std;
#define REP(i,a,b) for(int i=a;i<b;i++)

int main(){

	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int arr[n];
		REP(i,0,n){
			cin>>arr[i];
		}
		bool faro=true;
		REP(i,0,n-1){
			if(faro && arr[i]>arr[i+1]){
				int tmp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=tmp;
			}
			if(!faro && arr[i]<arr[i+1]){
				int tmp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=tmp;
			}
			faro=!faro;
		}
		REP(i,0,n){
			cout<<arr[i]<<" ";
		}
		cout<<endl;

	}
	return 0;
}
