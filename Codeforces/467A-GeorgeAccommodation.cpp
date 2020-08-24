#include<stdio.h>

int main(){
  short n,p,q,cant=0;
  scanf("%hd",&n);
  while(n--){
    scanf("%hd %hd", &p,&q);
    if(q-p>=2)
      cant++;
  }
     printf("%hd",cant); 

  return 0;
}
