#include<stdio.h>

int main(){
  short n;
  scanf("%hd",&n);
  unsigned long arr[n],max=0;
  for(short i=0;i<n;i++){
    scanf("%lu",&arr[i]);
    if(arr[i]>max)
      max=arr[i];
  }
  unsigned long long acum=0;
  for(short i=0;i<n;i++)
    acum+=(max-arr[i]);
  printf("%llu",acum);
  return 0;
}
  


