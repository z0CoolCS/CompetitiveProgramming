#include<stdio.h>
#include<cmath>
int main(){
  short x1,x2,x3,acum;
  scanf("%hd %hd %hd",&x1,&x2,&x3);
  if(x1>x2 && x1>x3){
    acum=x1;
    if(x2>x3)
      acum-=x3;
    else
      acum-=x2;
  }
  else if(x2>x1 && x2>x3){
     acum=x2;
     if(x1>x3)
       acum-=x3;
     else
       acum-=x1;
  }
  else{
    acum=x3;
    if(x1>x2)
      acum-=x2;
    else
      acum-=x1;
  }

  printf("%hd",acum);
  return 0;
}
