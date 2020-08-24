#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

bool state[27];
void dfs(int node){
}
int main(){

  string line;
  char x,y;
  while(getline(cin,line)){
    vector<int> nodes[27];
    memset
    for(char c:line){
      if(c!=' ')
        state[c-'a']=true;
    }
    getline(cin,line);
    bool faro=true;
    for(char c:line){
      if(c!=' '){
        if(faro){
          x=c;
          faro=!faro;
        }
        else{
          y=c;
          faro=!faro;
          nodes[x-'a'].push_back(y-'a');
        }
      }
    }

  }
  for(int i=0;i<26;i++){
    if(nodes[i].empty())
  }


  return 0;
}
