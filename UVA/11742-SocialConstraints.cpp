#include<stdio.h>
#include<algorithm>
#include<vector>

using namespace std;
struct constrains{
	int a;
	int b;
	int c;
};

int poselement(int arr[],int &num,int &n){
	for(int i=0;i<n;i++)
		if(arr[i]==num)
			return i;
}
bool validate(int arr[],vector<constrains> &conts,int &m,int &n){
	for(int i=0;i<m;i++){
		int posa=poselement(arr,conts[i].a,n);
		int posb=poselement(arr,conts[i].b,n);
		if(conts[i].c>0){
			if(abs(posa-posb)>conts[i].c)
				return true;
		}
		else
			if(abs(posa-posb)<-conts[i].c)
				return true;
	}
	return false;
}


int main(){

	int n,m,a,b,c,cont;
	int lista[8]={0,1,2,3,4,5,6,7};
	while(scanf("%d %d",&n,&m), n || m){
		cont=0;
		vector<constrains> conts;
		for(int i=0;i<m;i++){
			scanf("%d %d %d",&a,&b,&c);
			conts.push_back(constrains{a,b,c});
		}

		do{
 			cont+=1-validate(lista,conts,m,n);
		}
		while(next_permutation(lista,lista+n));
		
		printf("%d\n",cont);


	}
	return 0;

}

