#include<stdio.h>
#include<cmath>

int main(){
	long long num;
	scanf("%lld",&num);
	while(num!=0){
		long long root=sqrt(num);
		if(root*root==num)
			printf("yes\n");
		else
			printf("no\n");
	        scanf("%lld",&num);
	}
	return 0;
}
