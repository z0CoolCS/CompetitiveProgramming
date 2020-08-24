#include<iostream>

using namespace std;

int value(int b,int p,int m){
	b%=m;

	int res=1;
	while(p>0){

		if(p&1)
			res=res*b%m;
		b=b*b%m;
		p>>=1;
	}
	return res;
}
int main(){
	int b,p,m;
	string line;
	bool faro=false;
	while(cin>>b>>p>>m){
		cin.ignore();
		if(faro)
			getline(cin,line);
		cout<<value(b,p,m)<<endl;
		faro=false;

	}

	return 0;
}
