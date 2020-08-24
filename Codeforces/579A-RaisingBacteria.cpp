#include<stdio.h>
int main(){
  unsigned long long x,acum=2;
  scanf("%llu",&x);
  while(acum<=x)
   acum*=2;
  
  acum=1+x-acum/2;
  printf("%llu",acum);
  return 0;
}
