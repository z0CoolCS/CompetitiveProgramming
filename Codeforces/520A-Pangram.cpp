#include<stdio.h>

int main(){
  short n,cant=0;
  scanf("%hd",&n);
  bool arr[26]={false};
  char cad[n+1];
  scanf("%s",cad);
  while(n--){
    char c;
    c=cad[n];
    if(c>='A' && c<='Z'){
      if(!arr[c-65]){
        arr[c-65]=true;
        cant++;
      }
      }
   else if(c>='a' && c<='z'){
      if(!arr[c-97]){
        arr[c-97]=true;
        cant++;
      }
   }
  }
  if(cant==26)
    printf("YES");
  else
    printf("NO");

  return 0;
  }

