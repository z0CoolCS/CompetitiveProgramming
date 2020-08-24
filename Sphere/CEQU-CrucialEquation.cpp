#include<iostream>

using namespace std;

int gcd(int a,int b){
	int aux;
	while(b!=0){
		aux=a;
		a=b;
		b=aux%b;
	}
	return a;
}
string findsolution(int a,int b,int c){
	if(c%gcd(a,b)==0)
		return "Yes";
	return "No";
}
int main(){
	int t;
	int a,b,c;
	cin>>t;
	for(int i=1;i<=t;i++){
		cin>>a>>b>>c;
		cout<<"Case "<<i<<": "<<findsolution(a,b,c)<<endl;
	}

	return 0;
}
