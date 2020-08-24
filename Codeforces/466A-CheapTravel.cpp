#include<stdio.h>

int main(){
  short n,m,a,b;
  scanf("%hd %hd %hd %hd",&n,&m,&a,&b);
  long acum=0;
  if(m*a>b){
    acum=(n/m)*b;
    if(n%m*a>b)
      acum+=b;
    else
      acum+=(n%m)*a;
  }
  else
    acum=n*a;

  printf("%ld",acum);
  return 0;
}
