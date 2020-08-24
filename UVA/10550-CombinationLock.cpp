#include<stdio.h>

using namespace std;

int main(){
	int i,a,b,c;
	while(scanf("%d %d %d %d",&i,&a,&b,&c),a!=0 || b!=0 || c!=0 || i!=0){
	int grade=(i>=a)?(i-a)*9:(40+i-a)*9;
	grade+=(b>=a)?(b-a)*9:(40-a+b)*9;
	grade+=(b>=c)?(b-c)*9:(40-c+b)*9;
	
	printf("%d\n",1080+grade);
	}
	
	return 0;
}
