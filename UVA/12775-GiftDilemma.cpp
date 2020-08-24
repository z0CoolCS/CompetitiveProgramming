#include<iostream>

using namespace std;

long long int gcd(long long int a,long long int b,long long int &x,long long int y){
	long long int la=1,lb=0,ra=0,rb=1,t;
	bool flag=true;
	while(a%b){
		if(flag)
			la-=a/b*ra,lb-=a/b*rb;
		else
			ra-=a/b*la,rb-=a/b*lb;

		t=a;
		a=b;
		b=t%b;
		flag!=flag;
	}
	if(flag)
		x=ra,y=rb;
	else
		x=la,y=lb;

	return b;
}
bool findsolution(long long int &a, long long int &b, long long int &c,long long int &x,long long int &y,long long int &g){
	g=gcd(a,b,x,y);
	if(c%g!=0)
		return false;

	x*=c/g;
	y*=c/g;

	if(a<0) x=-x;
	if(b<0) y=-y;

	return true;
}
void shift(long long int &x,long long int &y,long long int a,long long int b,long long int cnt){
	x+=cnt*b;
	y-=cnt+a;
}
long long int findsolutions(long long int a,long long int b,long long int c,long long int minx,long long int maxx,long long int miny,long long int maxy){

	long long int x,y,g;
	if(!findsolution(a,b,c,x,y,g))
		return 0;

	a/=g;
	b/=g;

	long long int sign_b=b>0?1:-1;
	long long int sign_a=a>0?1:-1;

	shift(x,y,a,b,(minx-x)/b);
	if(x<minx)
		shift(x,y,a,b,sign_b);
	if(x>maxx)
		return 0;

	long long int lx1=x;

	shift(x,y,a,b,(maxx-x)/b);
	if(x>maxx)
		shift(x,y,a,b,-sign_b);

	long long int rx1=x;

	
	shift(x,y,a,b,-(miny-y)/a);
	if(x<minx)
		shift(x,y,a,b,sign_b);
	if(x>maxx)
		return 0;


}

int main(){



	return 0;
}
