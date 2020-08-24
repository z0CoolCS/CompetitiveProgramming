#include<iostream>
#include<vector>

using namespace std;

int n,m;
vector<int> arr[100];
bool state[100];

void dfs(int j){
  state[j]=true;
  for(int i=0;i<n;i++){
    if(!state[i]){
      for(int k:arr[j])
        for(int l:arr[i])
          if(k==l)
            dfs(i);
    }
  }
}

int main(){

  cin>>n>>m;
  int k,l,i,j;
  bool faro=false;
  for(i=0;i<n;i++){
    cin>>k;
    if(k)
      faro=true;
    for(j=0;j<k;j++){
      cin>>l;
      arr[i].push_back(l);
    }
  }

  int cont=0;
  for(int i=0;i<n;i++){
    if(!state[i]){
      dfs(i);
      cont++;
    }
  }

  if(faro)
    cont--;

  cout<<cont<<endl;

  return 0;
}
