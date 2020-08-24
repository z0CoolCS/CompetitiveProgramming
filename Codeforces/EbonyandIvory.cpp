#include<iostream>
#include<algorithm>

using namespace std;

int gcd(int a,int b,int &x,int &y){
	if(b==0){
		x=1;
		y=0;
		return a;
	}
	int x1,y1;
	int gcdnum=gcd(b,a%b,x1,y1);
	y=x1-a/b*y1;
	x=y1;
	return gcdnum;
}

bool findsolution(int a,int b,int c,int &x,int &y,int &g){
	g=gcd(a,b,x,y);
	if(c%g!=0)
		return 0;

	x*=c/g,y*=c/g;
	if(a<0) x=-x;
	if(b<0) y=-y;

	return true;
}
void shift(int a, int b, int &x,int &y,int cnt){
	x+=cnt*b;
	y-=cnt*a;
}
bool findsolutions(int a,int b,int c,int minx,int maxx,int miny,int maxy){
	int x,y,g;
	if(!findsolution(a,b,c,x,y,g))
		return 0;
	a/=g;
	b/=g;

	int sign_a=a>0?1:-1;
	int sign_b=b>0?1:-1;


	shift(a,b,x,y,(minx-x)/b);
	if(x<minx)
		shift(a,b,x,y,sign_b);
	if(x>maxx)
		return 0;

	int lx1=x;

	shift(a,b,x,y,(maxx-x)/b);
	if(x>maxx)
		shift(a,b,x,y,-sign_b);
	int rx1=x;

	shift(a,b,x,y,-(miny-y)/a);
	if(y<miny)
		shift(a,b,x,y,-sign_a);
	if(y>maxy)
		return 0;
	int lx2=x;

	shift(a,b,x,y,-(maxy-y)/a);
	if(y>maxy)
		shift(a,b,x,y,sign_a);
	int rx2=x;

	if(lx2>rx2)
		swap(lx2,rx2);

	int lx=max(lx1,lx2);
	int rx=min(rx1,rx2);

	if(lx>rx)
		return 0;

	if((rx-lx)/abs(b)+1>0)
		return true;
	return false;
}
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	
	if(findsolutions(a,b,c,0,c/a+1,0,c/b+1))
		cout<<"Yes\n";
	else
		cout<<"No\n";

	return 0;
}


