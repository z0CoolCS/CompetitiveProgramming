#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)

long long exp(long long n){

	if(n<1)
		return 1ll;

  long long ans=1ll;
  long long base=1ll*4;
  while(n>=1){
    if(n&1)
      ans*=base;
    base=base*base;
    n>>=1;
  }
  return ans;
}
int main(){
	long long int n;
	cin>>n;
  long long spaces=2*n-2;
  long long ans=0;
  REP(i,0,spaces-n+1){
    if(i==0 || i==spaces-n)
      ans+=1ll*4*3*exp(spaces-n-1);
    else
      ans+=1ll*4*3*3*exp(spaces-n-2);
  }
  cout<<ans<<endl;

	return 0;
}
