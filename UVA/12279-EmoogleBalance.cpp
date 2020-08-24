#include<stdio.h>

using namespace std;

int main(){
	int t,num,pos,neg,i=1;
	while(scanf("%d",&t),t){
		pos=0,neg=0;
		while(t--){
			scanf("%d",&num);
			if(num==0)
				neg++;
			else
				pos++;

		}
		printf("Case %d: %d\n",i++,pos-neg);
	}

	return 0;
}
