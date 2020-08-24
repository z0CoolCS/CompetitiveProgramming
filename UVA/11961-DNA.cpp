#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)

int n,k;
string cad;
int size;
set<string> ans;
string p[]={"A","G","C","T"};

void backtracking(int ind,int cur,string &op,bool *state){
  if(cur==min(n,k)){
    ans.insert(op);
    return;
  }
  if(!state[ind])
    backtracking(ind+1,cur,op,state);
  else{
    string org="";
    org+=op[ind];
    REP(i,0,4){
      op.replace(ind,1,p[i]);
      backtracking(ind+1,cur+1,op,state);
    }
    op.replace(ind,1,org);
  }
}

int main(){

  int t;
  cin>>t;
  while(t--){
    cin>>n>>k;
    cin>>cad;
    size=cad.size();
    ans.clear();

    bool arr[n];
    memset(arr,0,sizeof arr);

    REP(i,0,min(k,n))
      arr[i]=1;

    do{
      backtracking(0,0,cad,arr);
    }
    while(prev_permutation(arr,arr+n));

    cout<<ans.size()<<endl;

    for(auto& x:ans)
      cout<<x<<endl;

  }

  return 0;
}
