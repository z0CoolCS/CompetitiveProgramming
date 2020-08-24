#include<stdio.h>

int main(){
  short n,h,cont=0;
  scanf("%hd %hd",&n,&h);
  cont=n;
  while(n--){
    short aux;
    scanf("%hd",&aux);
    if(aux>h)
      cont++;
  }
  printf("%hd",cont);
  return 0;
}

