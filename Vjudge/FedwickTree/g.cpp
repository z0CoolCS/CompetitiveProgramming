#include<bits/stdc++.h>

using namespace std;


int main(){
  int n,k;
  int l,r;
  scanf("%d %d",&n,&k);
  vector<pair<int,int>> lines;
  vector<pair<int,int>> ans;
  for(int i=0;i<n;i++){
    scanf("%d %d",&l,&r);
    lines.push_back({l,r});
  }
  sort(begin(lines),end(lines));
  int k_act=0;
  int last_k=0;
  int l_act=lines[0].first;
  int r_act=lines[0].second;
  for(int i=1;i<n;i++){
    if(k==1)
    if(lines[i].first<=

  }


  return 0;
}
