#include<iostream>
using namespace std;
int x,y,d;
void gcd(int a,int b){
	if(b==0){
		x=1;
		y=0;
		d=a;
		return;
	}
	gcd(b,a%b);
	int x1=y,y1=x-a/b*y;
	x=x1;y=y1;
}
int main(){
	 int num1,num2;
	while(cin>>num1>>num2){
		gcd(num1,num2);
		cout<<x<<" "<<y<<" "<<d<<endl;

	}
	return 0;
}

