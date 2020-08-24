#include<iostream>
using namespace std;

void verificate(int *arr,int &size,int ind,int sumaactual,int &sum,bool &faro){

	if(sum==0){
		faro=true;
		return;
	}
	if(sum==sumaactual){
		faro=true;
		return;
	}
	if(ind==size)
		return;
	if(sumaactual>sum)
		return;

	verificate(arr,size,ind+1,sumaactual,sum,faro);
	if(faro)
		return;
	verificate(arr,size,ind+1,sumaactual+arr[ind],sum,faro);
}
int main(){

	int t;
	int n,p,i;
	cin>>t;
	while(t--){

		cin>>n;
		cin>>p;
		int arr[p];

		for(i=0;i<p;i++)
			cin>>arr[i];
		bool faro=false;
		verificate(arr,p,0,0,n,faro);
		if(faro)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}

	return 0;
}
