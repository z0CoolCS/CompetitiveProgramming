#include<stdio.h>
#include<algorithm>
#include<iostream>

using namespace std;

int main(){
	int h,w,minhi,maxhi,hi,bhi,tot;
	bool faro;
	while(scanf("%d %d",&h,&w),h || w){
		scanf("%d",&hi);
		minhi=hi;
		maxhi=hi;
		tot=0;
		if(w==1){
			printf("%d\n",h-minhi);
			continue;
		}

		bhi=hi;
		scanf("%d",&hi);
		if(hi>bhi){
			faro=true;
			tot+=h-bhi;
		}
		else
			faro=false;
		
		if(w==2){
			printf("%d\n",h-min(bhi,hi));
			continue;
		}
		bhi=hi;
		
		for(int i=2;i<w;i++){
			scanf("%d",&hi);
			if(!faro && hi>bhi)
				tot+=(h-bhi);
			else if(faro && hi<bhi)
				tot-=(h-bhi);
			if(hi>bhi)
				faro=true;
			else if(hi<bhi){
				faro=false;
				if(i==w-1)
					tot+=(h-hi);
			}

			bhi=hi;
		
		}
		printf("%d\n",tot);
		
	}

	return 0;
}
