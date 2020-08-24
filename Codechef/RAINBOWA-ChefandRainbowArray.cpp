#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)

int main(){
  int t,n,i,j;
  cin>>t;
  while(t--){
    cin>>n;
    int arr[n];
    bool faro=true;

    REP(i,0,n){
      cin>>arr[i];
      if(arr[i]>7)
        faro=false;
    }
    i=j=n/2;
    if(n%2==0)
      i--;
    if(arr[i]!=7)
      faro=false;
    int cont=7;
    while(i>=0 && j<=n && faro){
      if(arr[i]!=arr[j])
        faro=false;
      if(arr[i]!=cont){
        if(arr[i]==cont-1)
          cont--;
        else
          faro=false;
      }
      i--;
      j++;
    }
    if(faro && cont==1)
      cout<<"yes\n";
    else
      cout<<"no\n";

  }

  return 0;
}
