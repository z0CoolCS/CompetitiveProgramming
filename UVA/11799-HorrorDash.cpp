#include<stdio.h>

using namespace std;

int main(){
	int t,n,speed,maxspeed,i=1;
	scanf("%d",&t);
	while(t--){
		maxspeed=-1;
		scanf("%d",&n);
		while(n--){
			scanf("%d",&speed);
			if(speed>maxspeed)
				maxspeed=speed;
		}
		printf("Case %d: %d\n",i++,maxspeed);

	}

	return 0;
}
