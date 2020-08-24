#include<iostream>
#include<algorithm>

using namespace std;

int x[100000];
int count(int n,long long int value){
	int l=0,u=n-1;
	int mid;
	while(l<u){
		mid=l+(u-l+1)/2;
		if(x[mid]>value)
			u=mid-1;
		else
			l=mid;

	}

	if(x[u]>value)
		return 0;
	return u+1;
}
int main(){

	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>x[i];
	int q;
	int value;
	cin>>q;
	sort(x,x+n);

	for(int i=0;i<q;i++){
		cin>>value;
		cout<<count(n,value)<<endl;
	}

	return 0;
}
