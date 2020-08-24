#include<stdio.h>

int main(){
  short n,m,cant=0,q;
  scanf("%hd %hd",&n,&m);
  cant=n;
  while(q=n/m,q>0){
    cant+=q;
    n=q+n%m;
  }
  printf("%hd",cant);
  return 0;
  }
