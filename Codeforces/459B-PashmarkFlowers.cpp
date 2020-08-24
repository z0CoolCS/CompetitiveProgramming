#include<stdio.h>

int main(){
  unsigned long long n;
  scanf("%llu",&n);
  unsigned long long b;
  scanf("%llu",&b);
  unsigned long long min=b,max=b,contmin=1,contmax=1;
  n--;
  while(n--){
  scanf("%llu",&b);
  if(b>max){
    max=b;
    contmax=1;
   }
  else if(b==max)
    contmax++;
  if(b==min)
    contmin++;
  else if(b<min){
   min=b;
   contmin=1;
 }
  }
  if(max==min)
     b=(contmax*(contmax-1)/2);
  else
     b=contmax*contmin;
  printf("%llu %llu",max-min,b);

  return 0;
}
