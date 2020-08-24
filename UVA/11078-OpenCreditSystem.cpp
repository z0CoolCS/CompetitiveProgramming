#include<iostream>

using namespace std;

int main(){

	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int arr[n];

		for(int i=0;i<n;i++)
			cin>>arr[i];
		int maxi=arr[0];
		int ans=-100000;
		for(int i=1;i<n;i++){
			if(maxi-arr[i]>ans)
				ans=maxi-arr[i];
			if(arr[i]>maxi)
				maxi=arr[i];
		}
		cout<<ans<<endl;
	}

	return 0;
}
