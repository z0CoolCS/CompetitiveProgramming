#include<stdio.h>

using namespace std;

int main(){

	int t,x,y,xp,yp;
	while(scanf("%d",&t),t){
		scanf("%d %d",&x,&y);
		while(t--){
			scanf("%d %d",&xp,&yp);
			if(xp==x || yp==y)
				printf("divisa\n");
			else{
				if(xp>x && yp>y)
					printf("NE\n");
				else if(xp>x && yp<y)
					printf("SE\n");
				else if(xp<x && yp>y)
					printf("NO\n");
				else
					printf("SO\n");
			}
		}
	}
	return 0;
}

