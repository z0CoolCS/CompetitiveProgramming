#include<stdio.h>
#include<cmath>
bool isprime(unsigned long num){
  unsigned long aux=sqrt(num)+1;
  for(unsigned long i=2;i<aux;i++)
     if(num%i==0)
       return false;

 return true;}

int main(){
   unsigned long num;
   scanf("%lu",&num);
   
   for(unsigned long i=4;i<num;i++){
     if(!isprime(i) && !isprime(num-i)){
         printf("%lu %lu",i,num-i);
         break;
     }
   }
   return 0;
 }

