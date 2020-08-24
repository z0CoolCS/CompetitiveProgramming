#include<stdio.h>

int main(){
  short n,aux,max=0,min=101,imax,imin;
  scanf("%hd",&n);
  for(int i=1;i<=n;i++){
   scanf("%hd",&aux);
   if(aux>max){
     max=aux;
     imax=i;
   }
   if(aux<=min){
     min=aux;
     imin=i;
   }
  }

  if(imax>imin)
    printf("%hd",imax+(n-imin)-2);
  else
    printf("%hd",imax+(n-imin)-1);

  return 0;
}

