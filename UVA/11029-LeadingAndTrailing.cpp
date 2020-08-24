#include<iostream>
#include<string>
#include<cmath>
#include<iomanip>

using namespace std;

int value(int n,int k){
	n%=1000;

	int res=1;
	while(k>0){
		if(k & 1)
			res=res*n%1000;
		n=n*n%1000;
		k>>=1;
	}

	return res;
}
int main(){
	long long int n,k;
	int t;

	cin>>t;
	while(t--){
		cin>>n>>k;
		value(n,k);
		cout<<int(pow(10,fmod(k*log10(n),1))*100)<<"..."<<setw(3)<<setfill('0')<<value(n,k)<<endl;
	}

	return 0;
}
