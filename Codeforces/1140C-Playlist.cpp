#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)

struct song{

  int l;
  int b;
  bool operator<(const song &s){
    if(s.b==b)
      return s.l<l;
    return s.b<b;
  }

};

int main(){

  int n,k;
  int l,b;
  cin>>n>>k;

  vector<song> s;

  REP(i,0,n){
    cin>>l>>b;
    s.push_back({l,b});
  }

  sort(s.begin(),s.end());

  long long maxi=0;
  long long sum=0;
  multiset<int> ls;
  multiset<int>::iterator bgn,end;
  REP(i,0,n){
    if(k<=0){
      bgn=ls.begin();
      end=ls.begin();
      sum-=1ll*(*bgn);
      ls.erase(bgn,++end);
    }
    sum+=1ll*s[i].l;
    maxi=max(maxi,sum*s[i].b);
    ls.insert(s[i].l);
    k--;
  }
  cout<<maxi<<endl;

  return 0;
}
