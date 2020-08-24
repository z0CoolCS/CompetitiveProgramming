#include<iostream>
#include<vector>

using namespace std;

struct team{
  unsigned short a,b,c;
};
int main(){
  vector<unsigned short> c1,c2,c3;
  unsigned short n,cont=0;
  cin>>n;
  vector<team> teams;
  for(unsigned short i=1;i<=n;i++){
    short aux;
    cin>>aux;
    if(aux==1){
      if(c2.size()>0 && c3.size()>0){
        team newteam{i,c2[c2.size()-1],c3[c3.size()-1]};
        teams.push_back(newteam);
        c2.pop_back();
        c3.pop_back();
        cont++;
        }
      else
        c1.push_back(i);
   }
    else if(aux==2){
      if(c1.size()>0 && c3.size()>0){
        team newteam{i,c1[c1.size()-1],c3[c3.size()-1]};
        teams.push_back(newteam);
        c1.pop_back();
        c3.pop_back();
        cont++;
        }
      else
        c2.push_back(i);
   }
    else{
      if(c2.size()>0 && c1.size()>0){
        team newteam{i,c1[c1.size()-1],c2[c2.size()-1]};
        teams.push_back(newteam);
        c2.pop_back();
        c1.pop_back();
        cont++;
        }
      else
        c3.push_back(i);
   }
  }
  if(cont>0){
    cout<<cont<<endl;
    for(auto x:teams)
      cout<<x.a<<" "<<x.b<<" "<<x.c<<endl;
  }
  else
    cout<<0<<endl;

    return 0;
}


  


