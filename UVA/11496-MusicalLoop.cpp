#include<iostream>

using namespace std;

int main(){

	int n;
	int num;

	while(cin>>n,n){
		int arr[n];
		int peaks=0;
		for(int i=0;i<n;i++)
			cin>>arr[i];
		for(int i=1;i<n-1;i++){
			if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
				peaks++;
			else if(arr[i]<arr[i-1] && arr[i]<arr[i+1])
				peaks++;
		}
		if(arr[0]>arr[1] && arr[0]>arr[n-1])
			peaks++;
		else if(arr[0]<arr[1] && arr[0]<arr[n-1])
			peaks++;
		if(arr[n-1]>arr[n-2] && arr[n-1]>arr[0])
			peaks++;
		else if(arr[n-1]<arr[n-2] && arr[n-1]<arr[0])
			peaks++;

		cout<<peaks<<endl;



	}

	return 0;
}
