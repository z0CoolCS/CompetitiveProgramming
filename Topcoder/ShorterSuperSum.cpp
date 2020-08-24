#include<iostream>
#include<vector>
class ShorterSuperSum{

  public:
    int arr2[15][15];
    void fill2(){
      int i,j,k;
      for(i=0;i<15;i++)
        for(j=0;j<15;j++)
          arr2[i][j]=0;
      for(i=1;i<15;i++)
        arr2[0][i]=i;

      for(i=1;i<15;i++){
        for(j=1;j<15;j++){
          for(k=1;k<=j;k++)
            arr2[i][j]+=arr2[i-1][k];
        }
      }
    }
    ShorterSuperSum(){
      fill2();
    }
    int calculate(int k,int n){
      return arr2[k][n];
    }
};
