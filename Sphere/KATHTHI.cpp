#include<iostream>
#include<deque>
#include<algorithm>


using namespace std;

char matrix[1000][1000];
int d[1000][1000];
int x,y,i,j;
bool valid(int posx,int posy){
  return posx>=0 && posx<x && posy>=0 && posy<y;
}
void getMin(){

  int movx[]={1,-1,0,0};
  int movy[]={0,0,1,-1};
  int xi,yi;
  deque<pair<int,int>> dq;
  dq.push_back({0,0});
  d[0][0]=0;
  while(!dq.empty()){
    pair<int,int> p=dq.front();
    dq.pop_front();
    xi=p.first;
    yi=p.second;
    for(int k=0;k<4;k++){
      if(valid(xi+movx[k],yi+movy[k])){
        if(d[xi+movx[k]][yi+movy[k]]>d[xi][yi] && matrix[xi+movx[k]][yi+movy[k]]==matrix[xi][yi]){
          dq.push_front({xi+movx[k],yi+movy[k]});
          d[xi+movx[k]][yi+movy[k]]=d[xi][yi]+(matrix[xi+movx[k]][yi+movy[k]]!=matrix[xi][yi]);
        }
        else if(d[xi+movx[k]][yi+movy[k]]>d[xi][yi]+1){
          dq.push_back({xi+movx[k],yi+movy[k]});
          d[xi+movx[k]][yi+movy[k]]=d[xi][yi]+1;
        }
       }
     }
  }
}

int main(){

  int t;
  cin>>t;

  while(t--){
    cin>>x>>y;
    for(i=0;i<x;i++){
      for(j=0;j<y;j++){
        cin>>matrix[i][j];
        d[i][j]=1<<31-1;
      }
      cin.ignore();
    }
    getMin();
    cout<<d[x-1][y-1]<<endl;
  }

  return 0;
}
