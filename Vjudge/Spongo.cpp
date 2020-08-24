#include<bits/stdc++.h>

using namespace std;

int n,m;
const int maxn=1e5+10;
int f[maxn],b[maxn];

int cnt[maxn];
int pos[maxn];


int main(){
  scanf("%d %d",&n,&m);

  for(int i=0;i<n;i++){
    scanf("%d", f+i);
    pos[f[i]]=i+1;
    cnt[f[i]]++;
  }

  for(int i=0;i<m;i++){
    scanf("%d", b+i);
  }

  bool imp=false,amb=false;
  for(int i=0;i<m;i++){
    if(cnt[b[i]]==0){
      imp=true;
    }
    else if(cnt[b[i]]>1){
      amb=true;
    }
  }

  if(imp){ 
    printf("Impossible\n");  
  } else if(amb){ 
    printf("Ambiguity\n"); 
  } else{
    printf("Possible\n"); 
    for(int i=0;i<m;i++){
      printf("%d ",pos[b[i]]);
    }
    printf("\n"); 
  }


  return 0;
}
