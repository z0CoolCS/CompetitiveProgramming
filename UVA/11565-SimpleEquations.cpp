#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;
bool findvalues(int &maxi,int &a,int &b,int &c){
		for(int i=-22;i<=22;i++){
			for(int j=-100;j<=100;j++){
				for(int k=-100;k<=100;k++){
					if((i+j+k)==a && (i*j*k)==b && (i*i+j*j+k*k)==c && i!=j && j!=k &&  i!=k){
						if(i<j)
							printf("%d %d %d\n",i,j,k);
						else
							printf("%d %d %d\n",j,i,k);
							
						return false;
					}
				}
			}
		}
		return true;
}
int main(){
	int n,a,b,c,maxi;
	scanf("%d",&n);
	while(n--){
		scanf("%d %d %d",&a,&b,&c);
		maxi=max(a,max(b,int(sqrt(c))));
		if(findvalues(maxi,a,b,c))
			printf("No solution.\n");
		
	}

	return 0;

}
