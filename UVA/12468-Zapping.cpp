#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
	int a,b,maxi,mini;
	while(cin>>a>>b,a!=-1){
		maxi=max(a,b);
		mini=min(a,b);
		if(maxi-mini<100-maxi+mini)
			cout<<maxi-mini<<endl;
		else
			cout<<100-maxi+mini<<endl;

	}

	return 0;
}
