#include<iostream>
#include<cmath>

using namespace std;

long long  getvalue(int *arr,int size,int ind){

	long long value=0;
	for(int i=0;i<=size;i++)
		value+=(long long)arr[i]*pow(ind,i);
	return value;
}
int main(){

	int t,n,d,k,i;
	cin>>t;
	while(t--){
		cin>>n;
		int arr[n+1];
		for(i=0;i<=n;i++)
			cin>>arr[i];
		cin>>d;
		cin>>k;

		for(i=1;k>0;k-=d*i,i++);

		cout<<getvalue(arr,n,i-1)<<endl;

	}

	return 0;
}
