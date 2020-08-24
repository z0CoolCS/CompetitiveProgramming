#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	int k,aux;
	bool falg=false;
	while(scanf("%d",&k),k){
		if(falg)
			printf("\n");
		vector<int> num;
		for(int i=0;i<k;i++){
			scanf("%d",&aux);
			num.push_back(aux);
	       	}
		sort(num.begin(),num.end());
			 for (int i = 0; i < k - 5; i++){
			   for (int j = i + 1; j < k - 4; j++){
			     for (int l = j + 1; l < k - 3; l++){
			       for (int m = l + 1; m < k - 2; m++){
			         for (int n = m + 1; n < k - 1; n++){
			           for (int o = n + 1; o < k; o++){
			       		printf("%d %d %d %d %d %d\n",num[i],num[j],num[l],num[m],num[n],num[o]);
				   }
				 }
			       }
			     }
			   }
			 }



		falg=true;

	}

	return 0;
}
