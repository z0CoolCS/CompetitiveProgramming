#include<iostream>

using namespace std;

int main(){

	int t,f,area,animals,efriend;
	unsigned long long value;
	while(cin>>t){
	while(t--){
		value=0;
		scanf("%d",&f);
		while(f--){
			cin>>area>>animals>>efriend;
			value+=(unsigned long long)area*efriend;
		}
		cout<<value<<endl;

	}
	}
	return 0;
}
