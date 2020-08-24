#include<stdio.h>

int main(){
   short n,aux,leven=0,lodd=0,evens=0;
   scanf("%hd",&n);

   for(short i=1;i<=n;i++){
     scanf("%hd",&aux);
     if(aux%2==0){
       evens++;
       leven=i;
     }
     else{
       evens--;
       lodd=i;
     }

     }

     printf("%hd",evens>0?lodd:leven);
          
     return 0;
         
   }
