#include<stdio.h>
#include<set>

int main(){
  unsigned long long n;
  std::set<unsigned long long>arr;
  short cant=0;
  for(int i=0;i<4;i++){
    scanf("%llu",&n);
    arr.insert(n);
  }
  n=4-arr.size();
  printf("%llu",n);
  return 0;
}
