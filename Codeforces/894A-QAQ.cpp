#include<bits/stdc++.h>

using namespace std;

int main(){
  string cad;
  cin>>cad;
  int size=cad.size();

  int cont=0;
  for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
      for(int k=j+1;k<size;k++){
        if(cad[i]=='Q' && cad[j]=='A' && cad[k]=='Q')
          cont++;
      }
    }
  }
  cout<<cont<<endl;


  return 0;
}
