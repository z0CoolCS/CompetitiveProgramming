#include<stdio.h>
#include<algorithm>

int main(){
  short n;
  scanf("%hd",&n);
  short arr[n];
  for(int i=0;i<n;i++){
    scanf("%hd",&arr[i]);
  }
  std::sort(arr,arr+n);
  for(int i=0;i<n;i++){
    printf("%hd ",arr[i]);
  }
  
 return 0;
}
