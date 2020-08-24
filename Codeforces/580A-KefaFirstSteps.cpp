#include<stdio.h>

int main(){

  int n,cont=0,max=0;
  scanf("%d",&n);
  long aux,aux2=0;
  while(n--){
    scanf("%ld",&aux);
    if(aux>=aux2)
      cont++;
    else{
      if(cont>max)
        max=cont;
      cont=1;
    }

   aux2=aux;

  }
  if(cont>max)
   max=cont;
  printf("%d",max);
  return 0;
}
