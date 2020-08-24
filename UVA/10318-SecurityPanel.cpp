#include<bits/stdc++.h>

using namespace std;

#define rep(i,a,b) for(int i=a;i<b;i++)
int r,c;

bool isvalid(int posx,int posy){
  return posx>=0 && posx<r && posy>=0 && posy<c;
}

int main(){

  char ch;
  int cas=1;
  while(cin>>r>>c,c || r){
    cin.ignore();

    vector<pair<int,int>> movs;

    rep(i,0,3){
      rep(j,0,3){
        cin>>ch;
        if(ch=='*')
          movs.push_back({i-1,j-1});
      }
      cin.ignore();
    }

    int pat=1;
    const int res=(1<<(r*c))-1;
    int mini=INT_MAX;
    set<int> anspos;
    while(pat<=res){
      int tmp=0;
      set<int> tmppos;
      rep(i,0,r){
        rep(j,0,c){
          if(pat & 1<<(c*i+j)){
            tmppos.insert(c*i+j+1);  
            for(auto &x:movs){
              if(isvalid(i+x.first,j+x.second)){
                tmp^=1<<(c*(i+x.first)+j+x.second);
              }
            }
          }
        }
      }
      if(tmppos.size()<mini && tmp==res){
        anspos=tmppos;
        mini=tmppos.size();
      }
      pat++;
    }
    cout<<"Case #"<<cas<<endl;
    if(mini==INT_MAX)
      cout<<"Impossible.\n";
    else{
      bool space=false;
      for(auto &x:anspos){
        if(space)
          cout<<" ";
        cout<<x;
        space=true;
      }
      cout<<endl;
    }
    cas++;


  }


  return 0;
}
