#include<iostream>

using namespace std;

int main(){

	int t,b;
	cin>>t;
	int arr[10001];
	arr[1]=arr[2]=arr[3]=0;
	int aux;
	for(int i=4;i<=10001;i++){
		aux=i-2;
		aux/=2;
		arr[i]=aux*(aux+1)/2;
	}
	while(t--){
		cin>>b;
		cout<<arr[b]<<endl;

	}

	return 0;
}
