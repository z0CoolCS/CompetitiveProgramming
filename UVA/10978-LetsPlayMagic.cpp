#include<iostream>
#include<string>

using namespace std;

int main(){
	int n;
	while(cin>>n,n){
		string arr[n]={""};
		string card,number;
		int ind=-1;
		for(int i=0;i<n;i++){
			cin>>card>>number;
			int len=number.size();
			while(len>0){
				ind++;
				if(ind>n-1)
					ind%=n;
				if(arr[ind]=="")
					len--;
			}
				
			arr[ind]=card;

		}
		for(int i=0;i<n;i++){
			cout<<arr[i];
			if(i!=n-1)
				cout<<" ";
		}
		cout<<endl;
	}

	return 0;
}
