#include<stdio.h>
#include<cmath>

using namespace std;

bool findvalues(long long a,long long b,long long c,long long limit){
	for(long long i=-limit;i<=limit;i++){
		for(long long j=-limit;j<=limit;j++){
			for(long long k=-limit;k<=limit;k++){
				if((i+j+k)==a && (i*j*k)==b && (i*i+j*j+k*k)==c && i!=j && j!=k && i!=k){
					if(i<j)
						printf("%lld %lld %lld\n",i,j,k);
					else
						printf("%lld %lld %lld\n",j,i,k);
					return true;
				}
			}
		}
	}
	return false;
	
}


int main(){
	int n;
	scanf("%d",&n);
	long long a,b,c;
	while(n--){
		scanf("%lld %lld %lld",&a,&b,&c);
		long long limit=sqrt(c)+1;
		if(!findvalues(a,b,c,limit))
			printf("No solution.\n");

	}

	return 0;
}
