#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)

int binary_search(int* a,int l, int r,int val){

  while(l<r){
    int med=l+(r-l)/2;
    if(a[med]>=val)
      r=med;
    else
      l=med+1;
  }
  return l;
}

int main(){

  int n,m,ta,tb,k;
  cin>>n>>m>>ta>>tb>>k;
  int a[n],b[m];

  REP(i,0,n)
    cin>>a[i];

  REP(i,0,m)
    cin>>b[i];

  if(k>=n || k>=m)
    cout<<-1<<endl;
  else{
    int faro=true;
    int maxi=-1;
    REP(i,0,k+1){
      int pos=binary_search(b,0,m,a[i]+ta);
      if(pos+(k-i)>=m){
        faro=false;
        break;
      }
      maxi=max(b[pos+(k-i)]+tb,maxi);
    }
    if(faro)
      cout<<maxi<<endl;
    else
      cout<<-1<<endl;
  }

  return 0;
}
