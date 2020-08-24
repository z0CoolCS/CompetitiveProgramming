#include<stdio.h>

int main(){
  short n,copyn;
  scanf("%hd",&n);
  double acum=0;
  copyn=n;
  while(copyn--){
    short aux;
    scanf("%hd",&aux);
    acum+=aux;
  }
  printf("%.12f",acum/n);
  return 0;
}


