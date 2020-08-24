#include<bits/stdc++.h>

using namespace std;

int main(){

  int n;
  int x;
  cin>>n;
  vector<int> upper0;
  vector<int> lower0;
  vector<int> zeros;
  for(int i=0;i<n;i++){
    cin>>x;
    if(x==0)
      zeros.push_back(x);
    else if(x<0)
      lower0.push_back(x);
    else
      upper0.push_back(x);
  }

  if(lower0.size()%2==0){
    auto it=lower0.end();
    it--;
    zeros.push_back(*it);
    lower0.pop_back();
  }

  if(upper0.size()==0){
    auto it=lower0.end();
    --it;
    upper0.push_back(*it);
    lower0.pop_back();
    --it;
    upper0.push_back(*it);
    lower0.pop_back();
  }

  cout<<lower0.size();
  for(int &x:lower0){
    cout<<" ";
    cout<<x;
  }
  cout<<endl;
  cout<<upper0.size();
  for(int &x:upper0){
    cout<<" ";
    cout<<x;
  }
  cout<<endl;
  cout<<zeros.size();
  for(int &x:zeros){
    cout<<" ";
    cout<<x;
  }
  cout<<endl;

  return 0;
}
