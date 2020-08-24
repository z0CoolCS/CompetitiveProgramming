#include<stdio.h>

using namespace std;

int main(){
	printf("Lumberjacks:\n");

	int t,numb,numa;
	bool faro1,faro2;
	scanf("%d",&t);
	while(t--){
		faro2=true;
		scanf("%d",&numb);
		scanf("%d",&numa);
		if(numb>numa)
			faro1=true;
		else
			faro1=false;
		for(int i=0;i<8;i++){
			numb=numa;
			scanf("%d",&numa);
			if(faro1){
				if(numa>numb)
					faro2=false;
			}
			else{
				if(numa<numb)
					faro2=false;
			}

		}
		if(faro2)
			printf("Ordered\n");
		else
			printf("Unordered\n");


	}
	return 0;
}
