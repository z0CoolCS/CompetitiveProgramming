#include<bits/stdc++.h>

using namespace std;

int main(){

  int r,g,b;
  scanf("%d %d %d",&r,&g,&b);

  int n1[r],n2[g],n3[b];

  for(int i =0;i<r;i++)
    scanf("%d",n1+i);

  for(int i =0;i<g;i++)
    scanf("%d",n2+i);

  for(int i =0;i<b;i++)
    scanf("%d",n3+i);

  sort(n1,n1+r);
  sort(n2,n2+g);
  sort(n3,n3+b);

  long long ans=0;

  while(r>0 && g>0 && b>0){
    if(n1[r-1] >= n2[g-1] && n3[b-1]>=n2[g-1]){
      ans+=1LL*n1[r-1]*n3[b-1];
      r--;
      b--;
    }
    else if(n1[r-1] >= n3[b-1] && n2[g-1] >= n3[b-1]){
      ans+=1LL*n1[r-1]*n2[g-1];
      r--;
      g--;
    }
    else{
      ans+=1LL*n2[g-1]*n3[b-1];
      g--;
      b--;
    }
  }
  while(r>0 && b>0){
      ans+=1LL*n1[r-1]*n3[b-1];
      r--;
      b--;
  }
  while(r>0 && g>0){
      ans+=1LL*n1[r-1]*n2[g-1];
      r--;
      g--;
  }
  while(b>0 && g>0){
      ans+=1LL*n2[g-1]*n3[b-1];
      g--;
      b--;
  }

  printf("%lld\n",ans);

  return 0;
}
