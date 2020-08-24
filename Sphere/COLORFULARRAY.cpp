#include<iostream>
#include<stack>

using namespace std;

struct ran{
  int l;
  int r;
  int c;
};

int p[200002];
int col[200002];
int n;

int find(int node){
  return p[node]==node?node:p[node]=find(p[node]);
}
void make(int n){
  for(int i=1;i<=n+1;i++){
    col[i]=0;
    p[i]=i;
  }
}

int main(){

  int q,i;
  int l,r,c;

  cin>>n>>q;
  make(n);

  stack<ran> s;
  for(i=0;i<q;i++){
    ran rg;
    cin>>rg.l>>rg.r>>rg.c;
    s.push(rg);
  }

  while(!s.empty()){
    ran rg=s.top();
    s.pop();
    for(i=find(rg.l);i<=rg.r;i=find(i)){
      col[i]=rg.c;
      p[i]=i+1;
    }
  }

  for(i=1;i<=n;i++)
    cout<<col[i]<<endl;


  return 0;
}
