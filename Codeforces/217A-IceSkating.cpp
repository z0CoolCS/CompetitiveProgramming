#include<iostream>
#include<vector>

using namespace std;

struct cod{
  int x;
  int y;
};

int n;
cod arr[100];
bool state[100];

void dfs(int j){
  state[j]=true;
  for(int i=0;i<n;i++){
    if(!state[i] && (arr[i].x==arr[j].x || arr[i].y==arr[j].y))
      dfs(i);
  }
}

int main(){

  cin>>n;
  for(int i=0;i<n;i++)
    cin>>arr[i].x>>arr[i].y;

  int cont=-1;
  for(int i=0;i<n;i++){
    if(!state[i]){
      dfs(i);
      cont++;
    }
  }
  cout<<cont<<endl;

  return 0;
}
