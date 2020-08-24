#include<iostream>

using namespace std;

int main(){

	string word;
	int t;
	cin>>t;
	while(t--){
		cin>>word;
		if(word.size()==5)
			cout<<3<<endl;
		else{
			int t=0;
			t+=(word[0]=='t');
			t+=(word[1]=='w');
			t+=(word[2]=='o');
			if(t>=2)
				cout<<2<<endl;
			else
				cout<<1<<endl;

		}

	}
	return 0;
}
