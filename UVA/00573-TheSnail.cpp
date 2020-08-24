#include<stdio.h>

using namespace std;

int main(){
	float h,u,d,f,horig;
	int day;
	bool faro;
	while(scanf("%f %f %f %f",&h,&u,&d,&f),h!=0){
		day=0;
		horig=h;
		float fatigue=(u*f)/100;
		faro=true;
		while(true){
			if(h>horig){
				faro=false;
				break;	
			}
		
			day++;
			h-=u;
			if(h<0)
				break;
			u-=fatigue;
			if(u<0)
				u=0;
			h+=d;
		}
		if(faro)
			printf("success on day %d\n",day);
		else
			printf("failure on day %d\n",day);
		

	}

	return 0;
}
