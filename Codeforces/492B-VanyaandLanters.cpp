#include<stdio.h>
#include<algorithm>

int main(){
  short n;
  unsigned long long l;
  double dif;
  scanf("%hd %llu",&n,&l);
  unsigned long long arr[n];
  for(int i=0;i<n;i++)
    scanf("%llu",&arr[i]);

  std::sort(arr,arr+n);

  dif=arr[0];

  for(int i=1;i<n;i++){
    if(((arr[i]-arr[i-1])*1.0)/2>dif)
      dif=((arr[i]-arr[i-1])*1.0)/2;
     }

  dif=dif<l-arr[n-1]?l-arr[n-1]:dif;

  printf("%.10f",dif);
  

  return 0;
}



