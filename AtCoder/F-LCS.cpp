#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

string word1,word2;

const int size=3005;
int matrix[size][size];

void print(int x,int y){
  if(x<=0 || y<=0)
    return;
  if(word1[x-1]==word2[y-1]){
    print(x-1,y-1);
    printf("%c",word1[x-1]);
  }
  else{
    if(matrix[x-1][y]>matrix[x][y-1])
      print(x-1,y);
    else
      print(x,y-1);
  }
}

void lcs(int i1,int i2){

  for(int i=0;i<=i1;i++)
    matrix[i][0]=0;
  for(int i=1;i<=i2;i++)
    matrix[0][i]=0;

  for(int i=1;i<=i1;i++){
    for(int j=1;j<=i2;j++){
      if(word1[i-1]==word2[j-1])
        matrix[i][j]=1+matrix[i-1][j-1];
      else
        matrix[i][j]=max(matrix[i-1][j],matrix[i][j-1]);
    }
  }
  print(i1,i2);
  printf("\n");
}
int main(){

  cin>>word1;
  cin>>word2;

  lcs(word1.size(),word2.size());

  return 0;
}
