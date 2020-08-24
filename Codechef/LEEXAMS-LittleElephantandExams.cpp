#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)

double ans;
int t,n;
int prob,a,b;
bool state[17];

struct terna{
  int p;
  int a;
  int b;
};

void percent(int i,vector<terna> &v,double acum){
  if(i==n){
    ans+=acum;
    return;
  }
  if(!state[v[i].a]){
    state[v[i].a]=1;
    percent(i+1,v,acum*v[i].p/100.0);
    state[v[i].a]=0;
  }
  if(!state[v[i].b]){
    state[v[i].b]=1;
    percent(i+1,v,acum*(100-v[i].p)/100.0);
    state[v[i].b]=0;
  }
}

int main(){

  cin>>t;
  while(t--){
    cin>>n;
    vector<terna> p;
    REP(i,0,n){
      cin>>prob>>a>>b;
      p.push_back(terna{prob,a,b});
    }
    memset(state,0,sizeof state);
    ans=0;
    percent(0,p,1);
    cout<<setprecision(9)<<fixed;
    cout<<ans<<endl;

  }

  return 0;
}
