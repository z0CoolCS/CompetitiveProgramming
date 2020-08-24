#include<stdio.h>

int main(){
  int n,cont=0;
  scanf("%d",&n);
  char tokens[3],aux='2';
  while(n--){
    scanf("%s",tokens);   
    if(tokens[0]!=aux)
      cont++;
    aux=tokens[0];
 }
 printf("%d",cont);
return 0;
}
