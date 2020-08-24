#include<bits/stdc++.h>

using namespace std;

class ZigZag{
  public:
  int longestZigZag(vector<int> l){
    int size=l.size();
    int mat[size+1][2];
    memset(mat,0,sizeof mat);
    mat[1][0]=1;
    mat[1][1]=1;
    for(int i=2;i<=size;i++){
      for(int j=1;j<i;j++){
        if(l[j-1]<l[i-1]){
          mat[i][1]=max(mat[i][1],mat[j][0]+1);
        }
        else if(l[j-1]>l[i-1]){
          mat[i][0]=max(mat[i][0],mat[j][1]+1);
        }
        else{
          mat[i][0]=max(mat[i][0],mat[j][0]);
          mat[i][1]=max(mat[i][1],mat[j][1]);
        }

      }
    }
    return max(mat[size][1],mat[size][0]);
  }
};
