#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)

int main(){

	int t,n;
	cin>>t;

	while(t--){
		cin>>n;
		int cont=0;
		int a[n],b[n];
		REP(i,0,n)
			cin>>a[i];
		REP(i,0,n)
			cin>>b[i];
		if(a[0]>=b[0])
			cont++;
		REP(i,1,n){
			if(a[i]-a[i-1]>=b[i])
				cont++;
		}
		cout<<cont<<endl;
	}

	return 0;
}
