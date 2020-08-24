#include<stdio.h>
using namespace std;
int main(){
	
	int n;
	bool fal=false;
	while(scanf("%d",&n),n){
		if(fal)
			printf("\n");
		bool flag=false;
		int abcde,fghij=1234;
		abcde=fghij;
		int tmp,used;
		for(;fghij*n<=98765;fghij++){
			abcde=fghij*n;
			used=(fghij<10000);
			tmp=abcde; while(tmp){used|=1<<(tmp%10);tmp/=10;}
			tmp=fghij; while(tmp){used|=1<<(tmp%10);tmp/=10;}
			if(used==(1<<10)-1){
				flag=true;
				printf("%0.5d / %0.5d = %d\n",abcde,fghij,n);
			}
		}
		if(!flag)
			printf("There are no solutions for %d.\n",n);
		fal=true;
	}
	
	return 0;
}
