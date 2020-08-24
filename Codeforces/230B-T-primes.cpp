#include<stdio.h>
#include<cmath>
bool T_prime(unsigned long long num){
   unsigned long long aux=sqrt(num);
   short cont=0;
   for(unsigned long long i=2;i<aux;i++){
     if(num%i==0)
         return false;
     
   }
   if(aux*aux==num)
     return true;
   else
     return false;
}
int main(){
  int n;
  unsigned long long aux;
  scanf("%d",&n);
  while(n--){
    scanf("%llu",&aux);
    if(aux==1)
      printf("NO\n");
    else{
    if(T_prime(aux))
      printf("YES\n");
    else
      printf("NO\n");
    }
  }
  return 0;
}

