#include<stdio.h>

int main(){

  short n;
  scanf("%hd",&n);
  short arr[n][2];
  for(int i=0;i<n;i++){
    short aux,aux2;
    scanf("%hd %hd",&aux,&aux2);
    arr[i][0]=aux;
    arr[i][1]=aux2;
  }
  short cant=0;
  short size=n;
  while(n--){
    for(int i=0;i<size;i++){
      if(i!=n){
    if(arr[n][0]==arr[i][1])
      cant++;
      }
    }
  }
  printf("%hd",cant);

  return 0;
}

