#include<stdio.h>
#include<cmath>

bool isPrime(unsigned int num){
	long root=sqrt(num)+1;
	if(num%2==0)
		return false;
	else{
		for(unsigned int i=3;i<=root;i+=2){
			if(num%i==0)
				return false;
		}
	}
	return true;
}
unsigned int iscal(unsigned int num,int k,int n){
	if(k==1)
		return num;
	else if(k%2==0)
		return iscal((num*num)%n,k/2,n);
	else
		return (num*iscal((num*num)%n,k/2,n)%n);
}

int main(){
	bool arraynum[65001]={0};
	for(long i=2;i<=65000;i++){
		if(isPrime(i))
			continue;
	unsigned int j;
	for(j=2;j<i;j++){
		if(iscal(j,i,i)!=j)
			break;
	}
		if(i==j)
			arraynum[j]=1;
	}

	int num;
	scanf("%d",&num);
	while(num!=0){
		if(arraynum[num]==1)
			printf("The number %ld is a Carmichael number.\n",num);
		else
			printf("%ld is normal.\n",num);
	scanf("%d",&num);
	}
	return 0;
	}

		
