#include<bits/stdc++.h>

using namespace std;

int main(){

  int n,m;
  cin>>n>>m;
  int ns[n];
  for(int &i:ns)
    cin>>i;
  int ans[n+1];
  memset(ans,0,sizeof ans);
  unordered_map<int,bool> dict;
  for(int i=n-1;i>=0;i--){
    if(!dict[ns[i]]){
      ans[i]=ans[i+1]+1;
      dict[ns[i]]=true;
    }
    else
      ans[i]=ans[i+1];
  }

  int ms;
  for(int i=0;i<m;i++){
    cin>>ms;
    cout<<ans[ms-1]<<endl;
  }

  return 0;
}
