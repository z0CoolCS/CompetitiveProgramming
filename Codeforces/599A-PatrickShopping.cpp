#include<stdio.h>
int main(){
  unsigned long long d1,d2,d3,dt1,dt2,dt3,dt4;
  scanf("%llu %llu %llu",&d1,&d2,&d3);
  dt1=d1+d2+d3;
  dt2=2*d1+2*d2;
  dt3=2*d1+2*d3;
  dt4=2*d2+2*d3;
  if(dt1>dt2)
    dt1=dt2;
  if(dt1>dt3)
    dt1=dt3;
  if(dt1>dt4)
    dt1=dt4;

  printf("%llu",dt1);

  return 0;
}

