#include<iostream>

using namespace std;

long long int getremainder(long long int n,long long int k){
	long long int res=1;
	n%=10000007;
	while(k>0){
		if(k & 1)
			res=res*n%10000007;
		n=n*n%10000007;
		k>>=1;
	}
	return res;
}
int main(){
	long long int n,k;

	while(cin>>n>>k,n || k ){
		long long int value1=2*getremainder(n-1,k)%10000007;
		long long int value2=2*getremainder(n-1,n-1)%10000007;
		long long int value3=getremainder(n,k)%10000007;
		long long int value4=getremainder(n,n)%10000007;
		cout<<(value1+value2+value3+value4)%10000007<<endl;
	}

	return 0;
}
