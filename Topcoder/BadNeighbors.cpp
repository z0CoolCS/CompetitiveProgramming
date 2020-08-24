#include<bits/stdc++.h>

using namespace std;

class BadNeighbors{
  public:
  int maxDonations(vector<int> d){
    int size=d.size();

    int ans[size+1],ans2[size+1];
    memset(ans,0,sizeof ans);
    ans[1]=d[0];
    memset(ans2,0,sizeof ans2);

    for(int i=2;i<size;i++)
      ans[i]=max(ans[i-1],ans[i-2]+d[i-1]);

    for(int i=2;i<=size;i++)
      ans2[i]=max(ans2[i-1],ans2[i-2]+d[i-1]);

    return max(ans[size-1],ans2[size]);
  }
};
