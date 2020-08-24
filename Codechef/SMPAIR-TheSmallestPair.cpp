#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)

int main(){

	int t,n;
	
	cin>>t;

	while(t--){
		cin>>n;
		int min1,min2;
		min1=min2=INT_MAX;
		int curr;
		REP(i,0,n){
			cin>>curr;
			if(curr<=min1){
				min2=min1;
				min1=curr;
			}
			else if(curr<min2)
				min2=curr;
		}
		cout<<min1+min2<<endl;
	}

	return 0;
}
