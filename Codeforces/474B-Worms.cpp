#include<stdio.h>
unsigned int binarySearch(unsigned long* arr,unsigned long num,unsigned int l,unsigned int u){
  unsigned int med=(l+u+1)/2;
  if(arr[med]>=num && arr[med-1]<num)
    return med;
  else{
    if(arr[med]<num)
     return binarySearch(arr,num,med,u);
    else
     return binarySearch(arr,num,l,med);
  }
}
   
int main(){
  unsigned int n;
  scanf("%d",&n);
  unsigned long arr[n+1]={0};

  for(int i=1;i<=n;i++){
    scanf("%lu",&arr[i]);
    arr[i]+=arr[i-1];
  }
  unsigned int m;
  scanf("%d",&m);
  while(m--){
    unsigned long worm;
    scanf("%lu",&worm);
    printf("%d\n",binarySearch(arr,worm,0,n));
    }
  

  return 0;
}




