#include<stdio.h>

int main(){
  int n,pfree=0,cont=0;
  scanf("%d",&n);
  while(n--){
    short aux;
    scanf("%hd",&aux);
    if(aux==-1){
      if(pfree>0)
        pfree+=aux;
      else
        cont++;
    }
    else
      pfree+=aux;
  }
  printf("%d",cont);
  return 0;
}

