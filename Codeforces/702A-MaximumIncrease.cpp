#include<bits/stdc++.h>

using namespace std;

int main(){

  int n;
  cin>>n;
  int num[n];
  for(int &i:num)
    cin>>i;
  int cont[n];
  cont[0]=1;
  for(int i=1;i<n;i++){
    if(num[i]>num[i-1])
      cont[i]=cont[i-1]+1;
    else
      cont[i]=1;
  }
  cout<<*max_element(cont,cont+n)<<endl;
  

  return 0;
}
