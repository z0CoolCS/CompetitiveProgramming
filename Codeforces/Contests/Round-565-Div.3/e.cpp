#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<string.h>
typedef long long ll;

using namespace std;

int n,m;
void count(vector<int> *arr,bool states[],int pos,bool eti,int &cont,vector<int>&v){
  int size,tmp;
  int i;
  size=arr[pos].size();
  if(eti){
    cont++;
    v.push_back(pos);
  }
  for(i=0;i<size;i++){
    if(!states[arr[pos][i]]){
      states[arr[pos][i]]=1;
      count(arr,states,arr[pos][i],!eti,cont,v);
    }
  }
}
int main(){
  int t;
  cin>>t;
  int x,y;
  bool faro;
  int cont,mini;
  int i;
  while(t--){
    cin>>n>>m;
    vector<int> arr[n+1];
    bool states[n+1]={0};
    for(i=0;i<m;i++){
      cin>>x>>y;
      arr[x].push_back(y);
      arr[y].push_back(x);
    }
    vector<int> v1;
    cont=0;
    states[1]=1;
    count(arr,states,1,false,cont,v1);
    if(cont<=n/2){
    cout<<cont<<endl;
    for(int x:v1){
        cout<<x;
        cont--;
        if(cont!=0)
          cout<<" ";
    }
    }
    else{
    vector<int> v2;
    memset(states,0,sizeof states);
    states[1]=1;
    cont=0;
    count(arr,states,1,true,cont,v2);
    cout<<cont<<endl;
    for(int x:v2){
        cout<<x;
        cont--;
        if(cont!=0)
          cout<<" ";
      }
    }
    cout<<endl;
  }

  return 0;
}
