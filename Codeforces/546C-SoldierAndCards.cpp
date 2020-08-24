#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n,x,y;
  cin>>n;
  int k1,k2;
  queue<int> q1;
  queue<int> q2;
  cin>>k1;
  REP(i,0,k1){
    cin>>x;
    q1.push(x);
  }
  cin>>k2;
  REP(i,0,k2){
    cin>>x;
    q2.push(x);
  }

  int ceil=19916800,i=0;
  while(i<ceil){
    if(q1.empty() || q2.empty())
      break;
    x=q1.front();
    q1.pop();
    y=q2.front();
    q2.pop();
    if(x>y){
      q1.push(y);
      q1.push(x);
    }
    else{
      q2.push(x);
      q2.push(y);
    }
    i++;
  }
  if(i<ceil){
    cout<<i<<" ";
    if(q1.empty())
      cout<<2<<endl;
    else
      cout<<1<<endl;
  }
  else
    cout<<-1<<endl;

  return 0;
}
