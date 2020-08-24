#include<stdio.h>

int main(){
  short a,b;
  scanf("%hd %hd",&a,&b);
  if(a>b)
    printf("%hd %hd",b,(a-b)/2);
  else
    printf("%hd %hd",a,(b-a)/2);

  return 0;
}
