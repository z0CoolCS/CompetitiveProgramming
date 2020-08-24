#include<iostream>

using namespace std;

int main(){
	int n,num;
	int i=0;
	while(cin>>n,n!=0){
		int acum=0;
		int arr[n];
		for(int j=0;j<n;j++){
			cin>>num;
			arr[j]=num;
			acum+=num;
		}
		int mean=acum/n;
		int moves=0;
		for(int j=0;j<n;j++){
			if(arr[j]>mean)
				moves+=arr[j]-mean;
			
		}
		cout<<"Set #"<<++i<<endl;
		cout<<"The minimum number of moves is "<<moves<<"."<<endl;
		cout<<endl;
	}

	return 0;
}
