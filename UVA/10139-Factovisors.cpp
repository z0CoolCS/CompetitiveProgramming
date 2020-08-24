#include<iostream>
using namespace std;
long long iscal(long long num,long long mod){
	if(num==2)
		return 2;
	if (num%mod==0)
		return 0;

	return (num*iscal(num-1,mod))%mod;
}
int main(){
	long long num;
	long long mod;
	while(cin>>num>>mod){
	if(iscal(num,mod)==0)
		cout<<mod<<" divides "<<num<<"!"<<endl;
	else
		cout<<mod<<" does not divide "<<num<<"!"<<endl;
	}
	return 0;
}
