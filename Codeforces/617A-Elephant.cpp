#include<stdio.h>

int main(){
  unsigned long x;
  unsigned int steps=0;
  scanf("%lu",&x);
  for(int i=5;i>0;i--)
  {
    if(x>=i){
      steps+=x/i;
      x%=i;
    }
  }
  printf("%u",steps);
  return 0;
}

