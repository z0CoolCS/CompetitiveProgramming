#include<stdio.h>

using namespace std;

int main(){
	int t;
	long long num1,num2;
	scanf("%d",&t);
	while(t--){
		scanf("%lld %lld",&num1,&num2);
		if(num1>num2)
			printf(">\n");
		else if(num1<num2)
			printf("<\n");
		else
			printf("=\n");
	}
	return 0;
}
