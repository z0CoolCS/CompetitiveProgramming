#include<iostream>
#include<vector>
#include<deque>
#include<algorithm>

using namespace std;

class TheFlippingGame2{
  public:

    bool valid(int posx,int posy,int rows,int cols){
      return posx>=0 && posx<rows && posy>=0 && posy<cols;
    }

    int countChangeTiles(vector<string>&board,char c,int rows,int cols){

      int x,y;
      int movx[]={1,0,-1,0};
      int movy[]={0,1,0,-1};
      int arr[rows][cols];
      bool state[rows][cols];

      for(x=0;x<rows;x++)
        for(y=0;y<cols;y++){
          arr[x][y]=0;
          state[x][y]=0;
        }

      deque<pair<int,int>> q;
      q.push_back({0,0});
      int cont=arr[0][0]=1;
      state[0][0]=1;
      char curr;
      while(!q.empty()){
        pair<int,int> p=q.front();
        x=p.first;
        y=p.second;
        if(arr[x][y]>cont)
          cont=arr[x][y];
        q.pop_front();
        curr=board[x][y];
        cout<<x<<"-"<<y<<" / "<< arr[x][y]<<endl;
        if(curr=='e')
          curr=c;
        for(int k=0;k<4;k++){
          if(valid(x+movx[k],y+movy[k],rows,cols)){
            if(!state[x+movx[k]][y+movy[k]]){
              state[x+movx[k]][y+movy[k]]=1;
              if((board[x+movx[k]][y+movy[k]]=='e' && c==curr) || board[x+movx[k]][y+movy[k]]==curr){
                q.push_front({x+movx[k],y+movy[k]});
                arr[x+movx[k]][y+movy[k]]=arr[x][y];
              }
              else{
                q.push_back({x+movx[k],y+movy[k]});
                arr[x+movx[k]][y+movy[k]]=arr[x][y]+1;
              }
            }
          }
        }
      }

      return cont;
    }

    int MinimumMoves(int rows,int cols,vector<string> board){
      int cont=400;
      cont=min(cont,countChangeTiles(board,'w',rows,cols));
      cout<<endl;
      cont=min(cont,countChangeTiles(board,'b',rows,cols));
      return cont;
    }
};
