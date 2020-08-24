#include <stdio.h>

int main(){
  unsigned  long long n;
  scanf("%llu",&n);
  if(n%2==0)
    printf("%llu",n/2);
  else
    printf("%lld",-(n-(n-1)/2));

 return 0;
}

