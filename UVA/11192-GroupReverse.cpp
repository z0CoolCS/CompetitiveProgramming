#include<iostream>

using namespace std;

int main(){
	int n;
	string line;

	while(cin>>n,n){
		cin.ignore();
		getline(cin,line);
		int len=line.size();
		int i=0;
		int numgroup=len/n;
		while(i<len){
			for(int j=i+numgroup-1;j>=i;j--)
			{
				cout<<line[j];

			}
			i+=numgroup;
		}
		cout<<endl;
	}

	return 0;
}
