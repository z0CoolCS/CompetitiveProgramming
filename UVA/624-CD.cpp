#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)
int mini;
int n,t,x;
vector<int> ans;
vector<int> v(22);

void calculate(int ind,vector<int> tmp,int sum){
  if(sum>n)
    return;
  if(ind==t){
    if(n-sum<mini){
      mini=n-sum;
      ans=tmp;
    }
    return;
  }
  tmp.push_back(v[ind]);
  calculate(ind+1,tmp,sum+v[ind]);
  tmp.pop_back();
  calculate(ind+1,tmp,sum);
}
int main(){

  while(cin>>n){
    cin>>t;
    mini=INT_MAX;
    ans.clear();
    REP(i,0,t)
      cin>>v[i];

    calculate(0,vector<int>{},0);
    for(int &x:ans)
      cout<<x<<" ";
    cout<<"sum:"<<n-mini<<endl;

  }

  return 0;
}
