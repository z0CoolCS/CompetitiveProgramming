#include<stdio.h>

int main(){
  int n;
  scanf("%d",&n);
  for(short i=0;;i++){
    int aux=i*(i+1)/2;
    if(aux>n){
      printf("%hd",--i);
      break;
    }  
    n-=aux;
  }
  return 0;
}

