#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)

int main(){

  int t,n;
  string s;
  cin>>t;
  while(t--){
    cin>>s;
    n=s.size();
    int cont=0;
    int arr1[n+1],arr0[n+1];
    arr1[0]=0;
    arr0[0]=0;
    REP(i,1,n+1){
      arr1[i]=arr1[i-1]+(s[i-1]=='1');
      arr0[i]=arr0[i-1]+(s[i-1]=='0');
    }
    int pos,j;
    REP(i,1,n+1){
      j=0;
      while(j*j+j+i-1<=n){
        if(j==0)
          pos=i;
        else
          pos=j*j+j+i-1;
        int zeros=arr0[pos]-arr0[i-1];
        int unos=arr1[pos]-arr1[i-1];
        if(zeros==unos*unos)
          cont++;
        j++;
      }
    }
    cout<<cont<<endl;
  }

  return 0;
}
