#include<stdio.h>

int main(){
  short a,b,n;
  scanf("%hd %hd %hd",&a,&b,&n);
  bool faro=true;
  while(n!=0){
    short min=0;
     if(faro)
       min=n>a?a:n;
     else
       min=n>b?b:n;
       
     while(min!=0){
       if(!faro){
       if(b%min==0 && n%min==0){
         n-=min;
         break;
         }
       }
       else{
       if(a%min==0 && n%min==0){
         n-=min;
         break;
       }}
        min--;
     
     }
     faro=!faro;
  }
  
  if(faro)
    printf("1");
  else
    printf("0");

  return 0;
}
