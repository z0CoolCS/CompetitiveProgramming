#include<stdio.h>

int main(){
  int n,t;
  scanf("%d %d",&n,&t);
  bool faro=false;  
  n--;
  int step=1,temp=0;
  while(n--){
    int aux;
    scanf("%d",&aux);
    if(temp>1)
    {
      temp--;
      continue;
    }
    step+=aux;
    temp=aux;
      
    if(step>t)
      break;
    else if(step==t){
      faro=true;
      break;
    }
  }
  if(faro)
    printf("YES");
  else
    printf("NO");

 return 0;
}
