#include<stdio.h>
#include<cmath>

int main(){
   unsigned long long n,cont=0,temp=5,ind=1;
   scanf("%llu",&n);
   while(cont+temp<n){
     cont+=temp;
     temp*=2;
     ind++;
   }
   n-=cont;
   temp=pow(2,ind-1);
   n--;
   temp=n/temp;
   if(temp==0)
     printf("Sheldon");
   else if(temp==1)
     printf("Leonard");
   else if(temp==2)
     printf("Penny");
   else if(temp==3)
     printf("Rajesh");
   else if(temp==4)
     printf("Howard");

  return 0;
}
