#include<bits/stdc++.h> 

using namespace std; 

using ll = long long;

ll ang(ll n){

  return 180LL-180LL*(n-2)/n;
}

int main() { 
  int t,n;
  scanf("%d",&t);
  while(t--){
    scanf("%d",&n);
    ll a=ang(1LL*n);
    if (180LL%a!=0 && 90LL%a!=0) {
      printf("NO\n");
    }
    else {
      printf("YES\n");
    }

  }
  return 0; 
}
