#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)

int main(){

  int t,n;
  cin>>t;

  while(t--){

    cin>>n;

    int arr[n];
    int ans[n];
    int acum=0;

    REP(i,0,n){
      cin>>arr[i];
      acum+=arr[i];
    }

    double mean=1.0*acum/n;
    int lower=0,upper=0;

    if(n%2==0)
      ans[0]=floor(mean)-n/2+1;
    else
      ans[0]=floor(mean)-n/2;


    REP(i,1,n)
      ans[i]=ans[i-1]+1;
    
    REP(i,0,n){
      if(ans[i]>arr[i])
        upper+=ans[i]-arr[i];
      else
        lower+=arr[i]-ans[i];
    }

    if(upper!=lower)
      cout<<-1<<endl;
    else
      cout<<upper<<endl;

  }

  return 0;
}
