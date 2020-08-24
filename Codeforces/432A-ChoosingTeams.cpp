#include<stdio.h>

int main(){
  short arr[6]={0};
  short n,k;
  scanf("%hd %hd",&n,&k);
  while(n--){
    short aux;
    scanf("%hd",&aux);
    arr[aux]++;
  }
  int acum=0;
  for(short i=0;i<=5-k;++i)
    acum+=arr[i];

 printf("%d",acum/3);
 return 0;
}
