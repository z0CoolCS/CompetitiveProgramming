#include<stdio.h>

int main(){
  short t;
  scanf("%hd",&t);
  while(t--){
    short ang;
    scanf("%hd",&ang);
    if((360/(180-ang))==(360*1.0)/(180-ang))
      printf("YES\n");
    else
      printf("NO\n");
    }

    return 0;

}
    
