#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)
#define REV(i,a,b) for(int i=a;i>b;i--)

int mat[4][4];

void print(){
  REP(i,0,4){
    REP(j,0,4){
      cout<<mat[i][j]<<" ";
    }
    cout<<endl;
  }
}
int main(){
  int t;
  cin>>t;

  long long ans=0;
  long long loc;
  int n,s;
  char c;
  while(t--){
    cin>>n;
    if(n==0){
      cout<<-400<<endl;
      ans-=1ll*400;
      continue;
    }
    loc=-5000;
    cin.ignore();

    memset(mat,0,sizeof mat);

    REP(i,0,n){
      cin>>c>>s;
      cin.ignore();
      if(s==12)
        mat[c-'A'][0]++;
      else if(s==3)
        mat[c-'A'][1]++;
      else if(s==6)
        mat[c-'A'][2]++;
      else if(s==9)
        mat[c-'A'][3]++;
    }
    int arr[]={0,1,2,3};
    do{
      int tmp[4]={mat[0][arr[0]],mat[1][arr[1]],mat[2][arr[2]],mat[3][arr[3]]};
      long long tmpl=0;
      sort(tmp,tmp+4);
      int j=0;
      REV(i,3,-1){
        if(tmp[i]==0)
          tmpl-=1ll*100;
        else{
          if(j==0)
            tmpl+=1ll*tmp[i]*100;
          else if(j==1)
            tmpl+=1ll*tmp[i]*75;
          else if(j==2)
            tmpl+=1ll*tmp[i]*50;
          else if(j==3)
            tmpl+=1ll*tmp[i]*25;
          j++;
        }
      }
      loc=max(loc,tmpl);
    }
    while(next_permutation(arr,arr+4));

    cout<<loc<<endl;
    ans+=loc;
  }
  cout<<ans<<endl;

  return 0;
}
