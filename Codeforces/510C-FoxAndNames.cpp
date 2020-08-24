#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>

using namespace std;

int state[26];
int curstate=0;
stack<char> s;
vector<int> nodes[26];

bool dfs(int node){
  state[node]=2;
  for(int x:nodes[node]){
    if(state[x]==0){
      if(!dfs(x))
        return false;
    }
    else if(state[x]==2)
      return false;
  }
  state[node]=1;
  s.push(node);
  return true;
}

bool addNode(string &w1,string &w2){
    int size=min(w1.size(),w2.size());
    for(int j=0;j<size;j++){
      if(w1[j]!=w2[j]){
        nodes[w1[j]-'a'].push_back(w2[j]-'a');
        return true;
      }
    }
    return w1.size()<=w2.size();
}
int main(){

  int n;
  cin>>n;
  vector<string> w;
  string word;

  for(int i=0;i<n;i++){
    cin>>word;
    w.push_back(word);
  }
  for(int i=0;i<n-1;i++){
    if(!addNode(w[i],w[i+1])){
        cout<<"Impossible\n";
        return 0;
    }
  }
  for(int i=0;i<26;i++)
    state[i]=0;

  for(int i=25;i>=0;i--){
    if(state[i]==0){
      if(!dfs(i)){
        cout<<"Impossible\n";
        return 0;
      }
    }
  }
  while(!s.empty()){
    cout<<char(s.top()+'a');
    s.pop();
  }
  cout<<endl;


  return 0;
}
