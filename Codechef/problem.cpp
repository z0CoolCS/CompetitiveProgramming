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
		int min1,min2;
		min1=min2=1<<17;
		
		REP(i,0,n){
			if(arr[i]<min1){
				min2=min1;
				min1=arr[i];
			}
			else if(arr[i]<min2){
				min2=arr[i];
			}
		}
		cout<<min1+min2<<endl;

	}

	return 0;
}
