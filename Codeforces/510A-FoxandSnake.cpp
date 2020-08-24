#include<stdio.h>

void print(short m,char c){
  while(m--)
    printf("%c",c);
}
int main(){
  short n,m;
  bool aux=true;
  scanf("%hd %hd",&n,&m);
  for(short i=0;i<n;i++){
     if(i%2==0)
       print(m,'#');
     else{
       if(aux){
         print(m-1,'.');
         printf("#");
         aux=false;
       }
       else{
         printf("#");
         print(m-1,'.');
         aux=true;
       }
       }
  
   printf("\n");
  }
  return 0;
  }
