#include<stdio.h>

int main(){
  short n,k;
  scanf("%hd %hd",&n,&k);
  short i=0;
  short r=240-k;
  while(r>=0)
    r-=++i*5;
  i--;
  i=i>n?n:i;
  printf("%hd",i);
  return 0;
}

