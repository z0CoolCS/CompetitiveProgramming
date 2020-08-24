#include<stdio.h>

int main(){
  unsigned long long k1,k2,k3,k4;
  scanf("%llu %llu %llu %llu",&k1,&k2,&k3,&k4);
  unsigned long long min=k1;
  if(min>k3)
    min=k3;
  if(min>k4)
    min=k4;

  unsigned long long tot=256*min;
  k1-=min;
  k3-=min;
  k4-=min;

  min=k1;
  if(min>k2)
    min=k2;
  tot+=min*32;
  printf("%llu",tot);

  return 0;
 }


