#include<iostream>
#include<vector>
#include<queue>
#include<string>

using namespace std;

class FriendlyRooks{
  public:
    int getMinFriendlyColoring(vector<string> cboard){

      int rows=cboard.size();
      int cols=cboard[0].size();
      bool states[rows][cols];

      int i,j;

      for(i=0;i<rows;i++)
        for(j=0;j<cols;j++)
          states[i][j]=0;

      int cont=0;
      int x,y;
      queue<pair<int,int>> q;

      for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
          if(!states[i][j] && cboard[i][j]=='R'){
            q.push(make_pair(i,j));
            cont++;
            states[i][j]=1;
            while(!q.empty()){
              pair<int,int> p=q.front();
              q.pop();
              x=p.first;
              y=p.second;
              for(int k=0;k<rows;k++){
                if(x!=k && !states[k][y] && cboard[k][y]=='R'){
                  states[k][y]=1;
                  q.push(make_pair(k,y));
                }
              }
              for(int k=0;k<cols;k++){
                if(y!=k && !states[x][k] && cboard[x][k]=='R'){
                  states[x][k]=1;
                  q.push(make_pair(x,k));
                }
              }
            }
          }
        }
      }

      return cont;
    }
};
