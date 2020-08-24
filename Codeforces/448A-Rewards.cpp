#include<stdio.h>

int main(){
  short a1,a2,a3,b1,b2,b3,n;
  scanf("%hd %hd %hd",&a1,&a2,&a3);
  scanf("%hd %hd %hd",&b1,&b2,&b3);
  scanf("%hd",&n);
  short cont=0;
  cont+=(a1+a2+a3)/5+(((a1+a2+a3)%5!=0)?1:0);
  cont+=(b1+b2+b3)/10+(((b1+b2+b3)%10!=0)?1:0);
  if(cont>n)
    printf("NO");
  else
    printf("YES");

    return 0;
}

   
