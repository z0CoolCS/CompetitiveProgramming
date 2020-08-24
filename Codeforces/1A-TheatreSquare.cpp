#include <iostream>
using namespace std;

int main(){
  long long n,m,a;
  cin>>n>>m>>a;
  cout<<((n+a-1ll)/a)*((m+a-1ll)/a)<<endl;
  return 0;
}
