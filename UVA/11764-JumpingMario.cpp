#include<stdio.h>

using namespace std;

int main(){

	int t,n,wallhbefore,wallhnow,heights,lows,i=1;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		heights=0;
		lows=0;
		scanf("%d",&wallhbefore);
		n--;
		while(n--){
			scanf("%d",&wallhnow);
			if(wallhnow<wallhbefore)
				lows++;
			else if(wallhnow>wallhbefore)
				heights++;
			wallhbefore=wallhnow;
		}


		printf("Case %d: %d %d\n",i++,heights,lows);


	}
	return 0;

}
