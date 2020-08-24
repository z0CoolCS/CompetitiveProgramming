#include<stdio.h>

using namespace std;

int main(){
	int t,m,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&m,&n);
		printf("%d\n",(m/3)*(n/3));
	}
	return 0;
}
