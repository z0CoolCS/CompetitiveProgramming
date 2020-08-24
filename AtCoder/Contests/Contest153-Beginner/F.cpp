#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)

struct cord{
  int x;
  int h;
  bool operator<(const cord& c){
    return c.x>x;
  }
};
int main(){
  int n,d,a,x,h;
  vector<cord> m;
  cin>>n>>d>>a;
  REP(i,0,n){
    cin>>x>>h;
    m.push_back(cord{x,h});
  }

  sort(m.begin(),m.end());
  int cont=0,dam,j;
  REP(i,0,n){
    if(m[i].h>0){
      dam=m[i].h/a+(m[i].h%a>0);
      cont+=dam;
      j=i+1;
      while(j<n){
        if(m[j].x>m[i].x+d)
          break;
        m[j].h-=dam*a;
        j++;
      }
    }
  }
  cout<<cont<<endl;

  return 0;
}
