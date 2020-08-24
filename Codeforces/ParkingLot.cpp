#include<iostream>
#include<bits/stdc++.h>

using namespace std;

long long factorial(long long int n){
	if(n==2)
		return 2;
	return factorial(n-1)*n;
}

int main(){
	long long n;
	cin>>n;
	long long res=factorial(n);

	cout<<res<<endl;


	return 0;
}
