#include<iostream>

using namespace std;

int main(){
	
	int n,t;
	cin>>n;
	t=n+2;
	string line;
	cin.ignore();
	for(int i=0;i<n;i++){
		getline(cin,line);
		for(char &c:line){
			if(c=='+'){
				t++;
				break;
			}
		}
	}
	if(t==13)
		t++;
	cout<<t*100<<endl;

	return 0;
}
