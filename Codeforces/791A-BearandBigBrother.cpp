#include<stdio.h>

int main(){
  long year=0;
  long a,b;
  scanf("%ld %ld",&a,&b);
  while(a<=b){
    a*=3;
    b*=2;
    year++;
  }
  printf("%ld",year);
  return 0;
}
