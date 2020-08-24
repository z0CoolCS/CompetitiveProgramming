#include<stdio.h>

int main(){
  short n;
  scanf("%hd",&n);
  short arr[n+1];
  for(int i=1;i<n+1;i++){
    short aux;
    scanf("%hd",&aux);
    arr[aux]=i;}


  for(int i=1;i<n+1;i++)
    printf("%hd ",arr[i]);

  return 0;
}

