#include<iostream>

using namespace std;

long long int gcd(long long int a,long long int b){
	long long aux;
	while(b>0){
		aux=b;
		b=a%b;
		a=aux;
	}
	return a;
}
int main(){
	int t;
	cin>>t;
	long long int a,b;
	long long int gcdnum;
	while(t--){
		cin>>a>>b;
		gcdnum=gcd(a,b);
		cout<<gcdnum<<" "<<a/gcdnum*b<<endl;
	}

	return 0;
}
