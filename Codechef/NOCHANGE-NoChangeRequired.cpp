#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)
#define REV(i,a,b) for(int i=a;i>b;i--)

int t,n,p,a;

void verificate(int ind,bool& faro,vector<int> &num,int r,vector<int> &ans){


  if(r<0){
    cout<<"YES ";
    if(ind>=0){
      while(ind>=0){
        ans.push_back(0);
        ind--;
      }
    }
    REV(i,n-1,-1)
      cout<<ans[i]<<" ";
    cout<<endl;
    faro=true;
    return;
  }
  if(ind<0)
    return;

  int j=r/num[ind];

  if(r%num[ind]==0)
    j--;
  else
    j++;

  ans.push_back(j);
  verificate(ind-1,faro,num,r-j*num[ind],ans);
  if(faro)
    return;
  
}

int main(){

  cin>>t;
  while(t--){

    cin>>n>>p;
    vector<int> v(n);
    vector<int> ans;

    for(int &x:v)
      cin>>x;

    bool faro=false;
    verificate(n-1,faro,v,p,ans);
    if(!faro)
      cout<<"NO\n";

  }

  return 0;
}
