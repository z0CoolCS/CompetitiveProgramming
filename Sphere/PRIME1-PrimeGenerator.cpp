#include<iostream>
#include<unordered_map>

using namespace std;

unordered_map<long long int,bool> dict;

void SieveEratosthenes(){

	cout<<3<<endl;
	for(long long int i=2;i<=1000000000;i++){
		if(dict.count(i)==0){
			cout<<4<<endl;
			dict[i]=1;
			for(long long int j=i;i*j<=1000000000;j++){
				dict[i*j]=0;
				cout<<i*j<<endl;
			}
		}
		cout<<2<<endl;
	}
}
int main(){

	int t;
	cin>>t;

	SieveEratosthenes();

	long long int m,n;
	bool faro=false;
	while(t--){
		if(faro)
			cout<<endl;
		cin>>m>>n;
		cout<<1<<endl;
		for(long long int i=m;i<=n;i++)
			if(dict[i])
				cout<<i<<endl;

		faro=true;
	}
	return 0;
}
