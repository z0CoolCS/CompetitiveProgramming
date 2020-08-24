#include<stdio.h>

int main(){
  short n;
  scanf("%hd",&n);
  if(n==1)
    printf("1");
  else{
    n--;
  unsigned long aux1=1;
  for(int i=2;i<=2*n;i++)
      aux1*=i;
  unsigned long aux2=1;
  for(int i=2;i<=n;i++)
      aux2*=i;
  printf("%lu",aux1/(aux2*aux2));
  }
  return 0;
}
