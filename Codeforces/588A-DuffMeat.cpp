#include<stdio.h>

int main(){
  unsigned int n;
  scanf("%d",&n);
  unsigned long long tot=0,kilos=0;
  short mincost=101;

  while(n--){
    short cost,kilo;
    scanf("%hd %hd",&kilo,&cost);
    if(cost<mincost){
      tot+=(mincost*kilos);
      if(n==0)
        tot+=(cost*kilo);
      else{
      mincost=cost;
      kilos=kilo;}
    }
    else if(n==0){
      kilos+=kilo;
      tot+=(mincost*kilos);
    }
    else
      kilos+=kilo;
  }
  printf("%llu",tot);

  return 0;
}



