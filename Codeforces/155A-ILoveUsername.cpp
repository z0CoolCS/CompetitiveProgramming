#include<stdio.h>

int main(){
  short n;
  scanf("%hd",&n);
  short min,max,cont=0;

  short aux;
  scanf("%hd",&aux);
  max=min=aux;
  n--;
  while(n--){
    short aux;
    scanf("%hd",&aux);
    if(aux>max){
      cont++;
      max=aux;
    }
    else if(aux<min){
      min=aux;
      cont++;
    }
  }
  printf("%hd",cont);
  return 0;
}
