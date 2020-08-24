#include <stdio.h>

int main(){
  short a,b,c;
  scanf("%hd %hd %hd", &a,&b,&c);
  if(a==1 && b==1 && c==1)
    printf("%hd",3);
  else if(a==1){
    if(c==1)
      printf("%hd",2+b);
    else
      printf("%hd",(a+b)*c);
  }
  else if(b==1){
    if(a+b<b+c)
     printf("%hd",(a+b)*c);
   else
     printf("%hd",a*(b+c));
  }
  else if(c==1)
    printf("%hd",a*(b+c));
  else
    printf("%hd",a*b*c);


  return 0;
}
