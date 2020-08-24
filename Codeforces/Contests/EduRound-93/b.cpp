#include<bits/stdc++.h>

using namespace std;

int main(){

  int t;
  cin>>t;
  int n;

  string cad;
  while(t--){
    cin>>cad;
    int n=cad.size();
    vector<int> ans;
    int cont=0;
    for(int i=0;i<n;i++){
      if(cad[i]=='0'){
        ans.push_back(cont);
        cont=0;
      }
      else{
        cont++;
      }
    }
    ans.push_back(cont);
    sort(rbegin(ans),rend(ans));
    int res=0;
    bool faro=true;
    for(int x:ans){
      if(faro){
        res+=x;
      }
      faro=!faro;
    }
    cout<<res<<endl;
  }

  return 0;
}
