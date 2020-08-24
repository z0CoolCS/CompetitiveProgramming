#include<stdio.h>

using namespace std;

int main(){

	int t,w,l,h,i=1;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d %d",&w,&l,&h);
		if(w<=20 && l<=20 && h<=20)
			printf("Case %d: good\n",i++);
		else
			printf("Case %d: bad\n",i++);

	}

	return 0;
}
