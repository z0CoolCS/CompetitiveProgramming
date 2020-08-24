#include<stdio.h>

int main(){
  short c1,c2,c3,c4,c5;
  scanf("%hd %hd %hd %hd %hd",&c1,&c2,&c3,&c4,&c5);
  short tol=c1+c2+c3+c4+c5;
  if(tol==5*(tol/5) && tol!=0)
    printf("%hd",tol/5);
  else
    printf("-1");
    return 0;
}
