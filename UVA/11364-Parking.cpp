#include<stdio.h>

using namespace std;

int main(){

	int t,n,num,mini,maxi;
	scanf("%d",&t);
	while(t--){
		mini=100,maxi=-1;
		
	 	scanf("%d",&n);

	 	while(n--){
	 	 	scanf("%d",&num);
			if(num<mini)
				mini=num;
			if(maxi<num)
				maxi=num;
		}
		if(maxi==mini)
			printf("0\n");
		else
			printf("%d\n",2*(maxi-mini));
		
	}

	return 0;

}
