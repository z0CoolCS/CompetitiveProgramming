#include<stdio.h>

int main(){
  short n,m;
  scanf("%hd %hd",&n,&m);
  n=n>m?m:n;
  if(n%2==0)
    printf("%s","Malvika");
 else
   printf("%s","Akshat");

   return 0;
}
