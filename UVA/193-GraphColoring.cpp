#include<bits/stdc++.h>

using namespace std;

#define rep(i,a,b) for(int i=a;i<b;i++)

int n,k;
char color[101];
int ans;
vector<int> n_ans;

bool check(int p,vector<int> *g){
  for(int x:g[p]){
    if(color[x]==color[p])
      return false;
  }
  return true;
}
void back(vector<int> *g,int p,int cont,vector<int> &pans){

  if(p>n){
    if(ans<cont){
      n_ans=pans;
      ans=cont;
    }
    return;
  }

  if(cont+n-p+1<ans)
    return;

  color[p]='b';
  if(check(p,g)){
    pans.push_back(p);
    back(g,p+1,cont+1,pans);
    pans.pop_back();
  }
  color[p]='w';
  back(g,p+1,cont,pans);
}

int main(){
  int t;
  int x,y;
  cin>>t;
  while(t--){
    cin>>n>>k;
    vector<int> g[n+1];
    memset(color,'e',sizeof color);
    ans=0;
    rep(i,0,k){
      cin>>x>>y;
      g[x].push_back(y);
      g[y].push_back(x);
    }

    vector<int> pans;
    back(g,1,0,pans);

    cout<<ans<<endl;
    rep(i,0,ans){
      if(i>0)
        cout<<" ";
      cout<<n_ans[i];
    }
    cout<<endl;

  }



  return 0;
}
