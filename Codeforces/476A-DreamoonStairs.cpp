#include<stdio.h>

int main(){
  unsigned int n;
  short m;
  scanf("%d %hd",&n,&m);

  if(m>n)
    printf("-1");
  else{
    int cont=-1,aux=0,temp;
    unsigned n2=n;
    while(cont!=0){
      temp=n/2;
      aux=n2-temp*2;
      cont=(temp+aux)%m;
      n--;
   }
   temp+=aux;
   printf("%d",temp);
  }
  return 0;

  
}

