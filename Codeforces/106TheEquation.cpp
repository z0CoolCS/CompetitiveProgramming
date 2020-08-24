#include<iostream>
#include<algorithm>

using namespace std;

long long int gcd(long long int a, long long int b,long long int &x, long long int &y){
	bool flag=true;
	long long int lx=1,ly=0,rx=0,ry=1,t;

	while(a%b){
		if(flag)
			lx-=a/b*rx,ly-=a/b*ry;
		else
			rx-=a/b*lx,ry-=a/b*ly;

		t=a;
		a=b;
		b=a%t;
		flag!=flag;
	}
	if(flag)
		x=rx,y=ry;
	else
		x=lx,y=ly;

	return b;
}
bool findsolution(long long int a,long long int b, long long int c,long long int &x0,long long int &y0,long long int &g){
	g=gcd(a,b,x0,y0);
	if(c%g!=0)
		return false;
	x0*=c/g;
	y0*=c/g;

	if(a<0) x0=-x0;
	if(b<0) y0=-y0;

	return true;
}
void shift_solution(long long int &x,long long int &y,long long int a, long long int b,long long int cnt){
	x+=cnt*b;
	y-=cnt*a;
}

int findsolutions(long long int a,long long int b,long long int c,long long int minx,long long int maxx,long long int miny, long long int maxy){
	long long int x,y,g;
	if(!findsolution(a,b,c,x,y,g))
		return 0;

	a/=g,b/=g;

	long long int sign_a=a>0?1:-1;
	long long int sign_b=b>0?1:-1;

	shift_solution(x,y,a,b,(minx-x)/b);
	if(x<minx)
		shift_solution(x,y,a,b,sign_b);
	if(x>maxx)
		return 0;

	long long int lx1=x;

	shift_solution(x,y,a,b,(maxx-x)/b);
	if(x>maxx)
		shift_solution(x,y,a,b,-sign_b);

	long long int rx1=x;

	shift_solution(x,y,a,b,-(miny-y)/a);
	if(y<miny)
		shift_solution(x,y,a,b,-sign_a);
	if(y>maxy)
		return 0;

	long long int lx2=x;

	shift_solution(x,y,a,b,-(maxy-y)/a);
	if(y>maxy)
		shift_solution(x,y,a,b,sign_a);

	long long int rx2=x;

	if(lx2>rx2)
		swap(lx2,rx2);

	long long int lx=max(lx1,lx2);
	long long int rx=min(rx1,rx2);

	if(lx>rx) return 0;


	return (rx-lx)/abs(b)+1;

}
int main(){

	long long int a,b,c;
	long long int x1,x2,y1,y2;
	cin>>a>>b>>c;
	cin>>x1>>x2;
	cin>>y1>>y2;

	cout<<findsolutions(a,b,-c,x1,x2,y1,y2)<<endl;

	return 0;
}
