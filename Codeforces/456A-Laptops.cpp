#include<stdio.h>
#include<map>

int main(){
  unsigned long n;
  scanf("%lu",&n);
  std::map<unsigned long,unsigned long> dict;
  bool faro=false;
  while(n--){
  unsigned long a,b;
  scanf("%lu %lu",&a,&b);
  dict.insert(std::pair<unsigned long,unsigned long>(a,b));
  }
  auto t=dict.begin();
  while(true){
  for(auto it=--dict.end();it->first>t->first;it--){
    if(it->first>t->first && it->second<t->second){
      faro=true;
      break;
    }
  }
  if(faro)
    break;
  else
    t++;
  if(t==--dict.end())
        break;
  }
  if(faro)
    printf("Happy Alex");
  else
   printf("Poor Alex");

  return 0;
}

   
