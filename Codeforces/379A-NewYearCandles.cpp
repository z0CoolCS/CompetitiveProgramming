#include<stdio.h>

int main(){
  short a,b,candles=0,q;
  scanf("%hd %hd",&a,&b);
  candles=a;
  while(candles+=a/b,a/b)
    a=a/b+a%b;

  printf("%hd",candles);
  return 0;}

