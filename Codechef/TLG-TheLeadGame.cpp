#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int s,t,ac1=0,ac2=0,maxl=-1;
	int win=0;
	while(n--){
		cin>>s>>t;
		ac1+=s;
		ac2+=t;
		if(ac1>ac2 && maxl<ac1-ac2){
			win=1;
			maxl=ac1-ac2;
		}
		else if(ac1<ac2 && maxl<ac2-ac1){
			win=2;
			maxl=ac2-ac1;
		}
	}
	cout<<win<<" "<<maxl<<endl;
	return 0;
}
