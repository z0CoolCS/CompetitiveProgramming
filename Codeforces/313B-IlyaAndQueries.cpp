#include<bits/stdc++.h>

using namespace std;

int main(){

  string l;
  cin>>l;
  int n,x,y;
  cin>>n;
  int size=l.size();
  int eq[size];
  eq[0]=0;
  for(int i=1;i<size;i++){
    if(l[i]==l[i-1])
      eq[i]=eq[i-1]+1;
    else
      eq[i]=eq[i-1];
  }

  for(int i=0;i<n;i++){
    cin>>x>>y;
    cout<<eq[y-1]-eq[x-1]<<endl;
  }


  return 0;
}
