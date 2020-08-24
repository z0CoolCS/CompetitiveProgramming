#include<iostream>
#include<algorithm>

using namespace std;

bool verificate(int *arr,int n){
	for(int i=1;i<n;i++)
		if(arr[i]-arr[i-1]>200)
			return false;
	return true;
}

int main(){
	int n;
	while(cin>>n,n){
		int distances[n+1];
		for(int i=0;i<n;i++)
			cin>>distances[i];
		sort(distances,distances+n);
		distances[n]=1522;
		if(verificate(distances,n+1))
			cout<<"POSSIBLE\n";
		else
			cout<<"IMPOSSIBLE\n";
		
	}

	return 0;
}
