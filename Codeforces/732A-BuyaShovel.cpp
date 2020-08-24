#include<stdio.h>

int main(){
  short k,r;
  scanf("%hd %hd",&k,&r);
  long val;
  for(long i=1;;i++){
      if((k*i-r)%10==0 || (k*i)%10==0)
      {
        val=i;
        break;
      }
  }
  printf("%ld",val);
  return 0;
}

