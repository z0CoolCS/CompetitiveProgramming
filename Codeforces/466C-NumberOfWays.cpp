#include<iostream>

using namespace std;

int main(){

	int n;
	cin>>n;
	int arr[n];
	long long int sum[n+1];
	sum[0]=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		sum[i+1]=sum[i]+(long long int)arr[i];
	}
	if(sum[n]%3!=0)
		cout<<0<<endl;
	else
	{
		long long int acum=sum[n]/3;
		long long int dacum=2*acum;
		long long int count=0,ans=0;
		for(int i=1;i<n;i++){
			if(sum[i]==dacum)
				ans+=count;
			if(sum[i]==acum)
				count++;

		}
		cout<<ans<<endl;
	}

	return 0;
}
