#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)

int main(){
  int t;
  int x,y,m;
  cin>>t;
  while(t--){
    cin>>m>>x>>y;
    bool arr[101]={0};

    int h[m];
    REP(i,0,m)
      cin>>h[i];
    sort(h,h+m);
    REP(i,0,m){
      int start=h[i]-x*y;
      int end=h[i]+x*y;
      if(start<0)
        start=1;
      if(end>100)
        end=100;
      
      REP(j,start,end+1)
        arr[j]=1;
    }
    int cont=0;
    REP(i,1,101){
      if(!arr[i])
        cont++;
    }
    cout<<cont<<endl;

  }

  return 0;
}
