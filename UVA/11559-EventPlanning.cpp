#include<stdio.h>

using namespace std;

int main(){

	int participants,budget,hotels,weeks,cost,froom,mini;
	bool faro;
	while(scanf("%d %d %d %d",&participants,&budget,&hotels,&weeks)==4){
		mini=2000000001;
		while(hotels--){
			faro=false;
			scanf("%d",&cost);
			for(int i=0;i<weeks;i++){
				scanf("%d",&froom);
				if(froom>=participants)
					faro=true;
			}
			int costtotal=cost*participants;
			if(costtotal<=budget && faro && costtotal<mini)
				mini=costtotal;
		}
		if(mini!=2000000001)
			printf("%d\n",mini);
		else
			printf("stay home\n");
		
	}

	return 0;
}
