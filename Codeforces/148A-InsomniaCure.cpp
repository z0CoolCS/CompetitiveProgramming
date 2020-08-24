#include<stdio.h>

int main(){
  short k,l,m,n;
  int d;
  scanf("%hd %hd %hd %hd %d",&k,&l,&m,&n,&d);
  int tol=0;
  for(int i=1;i<d+1;i++){
    if(i%k==0 || i%l==0 || i%m==0 || i%n==0)
      tol++;
  }
  printf("%d",tol);
  return 0;
}

