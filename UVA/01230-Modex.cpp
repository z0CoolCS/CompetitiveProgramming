#include<iostream>

using namespace std;

int value(int x,int y,int n){
	x%=n;
	int r=1;
	while(y>0){
		if(y & 1)
			r*=x;
		x*=x;
		x%=n;
		r%=n;
		y>>=1;
	}
	return r;
}
int main(){
	int x,y,n;
	int c;
	cin>>c;
	while(c--){
		cin>>x>>y>>n;
		cout<<value(x,y,n)<<endl;

	}
	cin>>c;

	return 0;
}
