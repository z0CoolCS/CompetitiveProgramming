#include<stdio.h>
#include<set>

int main(){
  short n,p,q;
  std::set<short> arr;
   short aux;
  scanf("%hd",&n);
  bool faro=false;
  scanf("%hd",&p);
  while(p--){
   scanf("%hd",&aux);
   arr.insert(aux);
   if(arr.size()==n){
     faro=true;
     break;
   }
   }
  scanf("%hd",&q);
  while(q--){
   scanf("%hd",&aux);
   arr.insert(aux);
   if(arr.size()==n){
     faro=true;
     break;
   }
   }

  if(faro)
       printf("%s","I become the guy.");
  else
       printf("%s","Oh, my keyboard!");


 return 0;
}
       

