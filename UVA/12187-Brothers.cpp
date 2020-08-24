#include<stdio.h>

using namespace std;

int main(){

	int n,r,c,k;

	int matrix[102][102]={-1};
	int matrixcp[102][102]={-1};

	int brohated;

	bool faro;

	while(scanf("%d %d %d %d",&n,&r,&c,&k), n || r || c || k){
		for(int i=1;i<=r;i++)
			for(int j=1;j<=c;j++){
				scanf("%d",&matrix[i][j]);
				matrixcp[i][j]=matrix[i][j];
			}


		while(k--){
			for(int i=1;i<=r;i++)
				for(int j=1;j<=c;j++){

					brohated=matrixcp[i][j];

					if(brohated==n-1)
						brohated=0;
					else
						brohated++;

					if(matrixcp[i-1][j]==brohated)
						matrix[i-1][j]=matrixcp[i][j];
					if(matrixcp[i+1][j]==brohated)
						matrix[i+1][j]=matrixcp[i][j];
					if(matrixcp[i][j-1]==brohated)
						matrix[i][j-1]=matrixcp[i][j];
					if(matrixcp[i][j+1]==brohated)
						matrix[i][j+1]=matrixcp[i][j];

				}
			if(k!=0)
				for(int i=1;i<=r;i++)
					for(int j=1;j<=c;j++)
						matrixcp[i][j]=matrix[i][j];


		}
		for(int i=1;i<=r;i++){
			faro=false;
			for(int j=1;j<=c;j++){
				if(faro)
					printf(" ");
					
				printf("%d",matrix[i][j]);
				faro=true;
			}
			printf("\n");
		}
	}

	return 0;

}
