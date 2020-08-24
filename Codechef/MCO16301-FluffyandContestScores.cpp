#include<bits/stdc++.h>

using namespace std;
#define REP(i,a,b) for(int i=a;i<b;i++)

int n;
set<int> ans;

struct score{
  int size;
  vector<int> s;
};

vector<score> scores;

void sumScore(int i,int sum){
  if(i==n){
    ans.insert(sum);
    return;
  }
  REP(j,0,scores[i].size){
    sumScore(i+1,sum+scores[i].s[j]);
  }
}

int main(){
  cin>>n;
  int t,x;
  REP(i,0,n){
    cin>>t;
    score sc;
    sc.size=t;
    REP(j,0,t){
      cin>>x;
      sc.s.push_back(x);
    }
    scores.push_back(sc);
  }
  sumScore(0,0);

  for(auto x:ans)
    cout<<x<<" ";
  cout<<endl;

  return 0;
}
