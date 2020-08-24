#include<stdio.h>

using namespace std;

int main(){

	int t,i=1,sal1,sal2,sal3;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d %d",&sal1,&sal2,&sal3);
		if((sal1>=sal2 && sal1<=sal3) || (sal1>=sal3 && sal1<=sal2))
			printf("Case %d: %d\n",i++,sal1);
		else if((sal2>=sal1 && sal2<=sal3) || (sal2>=sal3 && sal2<=sal1))
			printf("Case %d: %d\n",i++,sal2);

		else
			printf("Case %d: %d\n",i++,sal3);
	}
	return 0;
}

