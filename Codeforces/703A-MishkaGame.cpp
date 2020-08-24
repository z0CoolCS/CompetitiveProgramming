#include<stdio.h>

int main(){
  short n,mcount=0,ccount=0;
  scanf("%hd",&n);
  while(n--){
    short m,c;
    scanf("%hd %hd",&m,&c);
    if(m>c)
      mcount++;
    else if(c>m)
      ccount++;
    }
 
  if(mcount>ccount)
    printf("Mishka");
  else if(mcount<ccount)
    printf("Chris");
  else
    printf("Friendship is magic!^^");

  return 0;
}
    
