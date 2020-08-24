#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main(){
	int t,num;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&num);
		int res=((num*63+7492)*5-498)%100/10;
		printf("%d\n",abs(res));


	}

	return 0;
}
