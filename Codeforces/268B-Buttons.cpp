#include<stdio.h>

int main(){
  short n;
  scanf("%hd",&n);
  short aux=1;
  long tot=n;
  while(n--){
    tot+=n*aux;
    aux++;
  }
  printf("%ld",tot);
  return 0;
}
