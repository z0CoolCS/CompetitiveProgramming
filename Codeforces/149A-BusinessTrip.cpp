#include<stdio.h>
#include<algorithm>
int main(){
  short k;
  scanf("%hd",&k);
  short arr[12]={0};
  short tot=0;
  for(int i=0;i<12;i++){
    scanf("%hd",&arr[i]);
    tot+=arr[i];
  }
  
  std::sort(arr,arr+12);

  if(tot<k)
    printf("-1");
  else if(k==0)
    printf("0");
  else{
    short aux=0;
    for(short i=11;i>=0;i--){
      aux+=arr[i];
      if(aux>=k){
        printf("%hd",(12-i));
        break;
      }

    }

  }
  return 0;
}

