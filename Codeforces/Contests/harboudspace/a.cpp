#include<bits/stdc++.h>

using namespace std;

int main(){
  int t;
  long long a,b,c;
  long long ans1,ans2;
  scanf("%d",&t);

  while(t--){
    scanf("%lld %lld %lld",&a,&b,&c);

    ans1=(a<c)?1ll:-1ll;
    a*=b;

    ans2=


    printf("%lld %lld\n",ans1,ans2);

  }

  return 0;
}
