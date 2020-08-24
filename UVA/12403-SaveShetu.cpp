#include<iostream>

using namespace std;

int main(){

	int t;
	cin>>t;
	string operation;
	int amount;
	unsigned long long total=0;

	while(t--){
		cin>>operation;
		if(operation=="donate")
		{
			cin>>amount;
			total+=amount;

		}
		else
			cout<<total<<endl;

	}

	return 0;
}
