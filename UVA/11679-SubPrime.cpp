#include<stdio.h>

using namespace std;

int main(){

	int b,n,reserve,debt,cred,debenture;
	while(scanf("%d %d",&b,&n),b!=0 || n!=0){
		int reserves[21]={0};
		for(int i=1;i<=b;i++){
			scanf("%d",&reserve);
			reserves[i]=reserve;
		}
		bool faro=true;

		while(n--){
			scanf("%d %d %d",&debt,&cred,&debenture);
			reserves[debt]-=debenture;
			reserves[cred]+=debenture;
		}
		for(int i=1;i<=b;i++){
			if(reserves[i]<0)
			{
				faro=false;
				break;
			}
		}
		if(faro)
			printf("S\n");
		else
			printf("N\n");

	
	}

	return 0;

}
