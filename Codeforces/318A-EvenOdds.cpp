#include<stdio.h>

int main(){
 unsigned  long long num,k;
 scanf("%llu %llu",&num,&k);
   unsigned long long aux=num/2;
 if(num%2!=0)
   aux++;

   if(k>aux)
     printf("%llu", 2*(k-aux));
   else
     printf("%llu", 2*(k-1)+1);

 return 0;
}

