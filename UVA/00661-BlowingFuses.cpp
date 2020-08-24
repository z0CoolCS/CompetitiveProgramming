#include<stdio.h>

using namespace std;

int main(){
	int n,m,c,devstate,maxi,acum,j=1;
	bool faro;
	while(scanf("%d %d %d",&n,&m,&c),n!=0 || m!=0 || c!=0){
		bool devicesstate[21]={0};
		int cdevices[21]={0};
		faro=true;
		maxi=0;
		acum=0;
		for(int i=1;i<=n;i++){
			scanf("%d",&cdevices[i]);
		}
		for(int i=0;i<m;i++){
			scanf("%d",&devstate);
			devicesstate[devstate]=!devicesstate[devstate];
			if(devicesstate[devstate])
			{
				acum+=cdevices[devstate];
				if(acum>maxi)
					maxi=acum;
				if(acum>c)
					faro=false;
			}
			else
				acum-=cdevices[devstate];
		}

		if(faro)
		{

			printf("Sequence %d\n",j++);
			printf("Fuse was not blown.\n");
			printf("Maximal power consumption was %d amperes.\n",maxi);
		}
		else{
			printf("Sequence %d\n",j++);
			printf("Fuse was blown.\n");
		}
		printf("\n");
	


	}

	return 0;
}
