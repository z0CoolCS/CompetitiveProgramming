#include<bits/stdc++.h>

using namespace std;

const int size=3*1e5;
int n,c;
long long ft[size];
long long nums[size];

void update(int i,int v){
  for(;i<=n;i+=i&-i)
    ft[i]+=1ll*v;
}

long long query_p(int i){
  long long sum=0;
  for(;i>0;i-=i&-i)
    sum+=ft[i];
  return sum;
}
long long query(int x,int y){
  return query_p(y)-query_p(x-1);
}

pair<int,int> returnXY(string cad){
  stringstream ss(cad);
  string aux;
  ss>>aux;
  int x,y;
  ss>>x;
  ss>>y;
  return {x,y};
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int x,y,v;
  string op;
  bool space=false;
  int ind=0;
  while(cin>>n,n){
    if(space)
      cout<<"\n";
    ind++;
    cout<<"Case "<<ind<<":\n";
    space=true;
    memset(ft,0,sizeof ft);
    memset(nums,0,sizeof nums);
    for(int i=1;i<=n;i++){
      cin>>nums[i];
      update(i,nums[i]);
    }
    while(getline(cin,op),op!="END"){
      auto pair=returnXY(op);
      x=pair.first;
      y=pair.second;
      if(op[0]=='S'){
        update(x,y-nums[x]);
        nums[x]=y;
      }
      else if(op[0]=='M'){
        cout<<query(x,y)<<endl;
      }
    }
  }
  return 0;
}
