#include<iostream>

using namespace std;


int arr[100000];
int sum[100001];
int n,t;

int maxBooks(int l,int u,int value){
	int mid;
	while(l<u){
		mid=l+(u-l+1)/2;

		if(sum[mid]-value>t)
			u=mid-1;
		else
			l=mid;
	}
	return l;

}
int main(){
	cin>>n>>t;
	sum[0]=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		sum[i+1]=sum[i]+arr[i];
	}
	int count;
	int maxi=-1;
	for(int i=0;i<=n;i++){
		count=maxBooks(i,n,sum[i]);
		if(maxi<count-i)
			maxi=count-i;
	}
	cout<<maxi<<endl;

	return 0;
}
