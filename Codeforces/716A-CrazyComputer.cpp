#include<stdio.h>

int main(){
  unsigned int n;
  unsigned long long c,cont=1;
  scanf("%d %llu",&n,&c);
  unsigned long long auxprev;
  scanf("%llu",&auxprev);
  n--;
  while(n--){
    unsigned long long aux;
    scanf("%llu",&aux);
    if(aux-auxprev>c)
      cont=1;
    else
      cont++;
    auxprev=aux;
  }

  printf("%llu",cont);
  return 0;
}

