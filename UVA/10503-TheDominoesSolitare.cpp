#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)

bool faro;
int n,m;

bool state[15];

void print(vector<pair<int,int>> &a,int size){
  REP(i,0,size)
    cout<<a[i].first<<"/"<<a[i].second<<" ";
  cout<<endl;
}
void backtracking(vector<pair<int,int>> &p,vector<pair<int,int>> &a,int ind){

  REP(i,0,m){
    if(!state[i]){
     if(a[ind].second==p[i].first){
      if(ind==n-1){
        if(a[n+1].first==p[i].second){
          faro=true;
          return;
        }
      }
      else{
          state[i]=true;
          a[ind+1].first=p[i].first;
          a[ind+1].second=p[i].second;
          backtracking(p,a,ind+1);
          if(faro)
            return;
          state[i]=false;
      }
     }
     else if(a[ind].second==p[i].second){
      if(ind==n-1){
        if(a[n+1].first==p[i].first){
          faro=true;
          return;
        }
      }
      else{
          state[i]=true;
          a[ind+1].first=p[i].second;
          a[ind+1].second=p[i].first;
          backtracking(p,a,ind+1);
          if(faro)
            return;
          state[i]=false;
      }
     }
    }
  }

}

int main(){
  while(cin>>n,n){
    cin>>m;
    faro=false;

    pair<int,int> i;
    pair<int,int> j;
    memset(state,0,sizeof state);

    vector<pair<int,int>> ans(n+2);
    cin>>ans[0].first>>ans[0].second;
    cin>>ans[n+1].first>>ans[n+1].second;
    vector<pair<int,int>> p(m);

    REP(i,0,m)
      cin>>p[i].first>>p[i].second;

    backtracking(p,ans,0);

    if(faro)
      cout<<"YES\n";
    else
      cout<<"NO\n";

  }

  return 0;
  }
