#include<stdio.h>
#include<cmath>

using namespace std;

int main(){

	float h,m;
	while(scanf("%f:%f",&h,&m),h || m){
		float angh=m/2+h*30;
		float angm=m*6;
		if(abs(angh-angm)>180){
			if(abs(angh-angm)==360)
				printf("0.000\n");
			else
				printf("%.3f\n",360-abs(angm-angh));
		}
		else
			printf("%.3f\n",abs(angm-angh));

	}
	return 0;
}
