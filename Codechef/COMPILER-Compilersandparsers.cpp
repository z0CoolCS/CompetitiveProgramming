#include<bits/stdc++.h>

using namespace std;

int main(){
  int t;
  int ans;
  cin>>t;
  string word;
  while(t--){
    cin>>word;
    int size=word.size();
    int cont=0;
    ans=0;
    for(int i=0;i<size;i++){
      if(word[i]=='<')
        cont++;
      else{
        cont--;
        if(cont==0)
          ans=max(i+1,ans);
      }
      if(cont<0)
        break;
    }
    cout<<ans<<endl;
  }

  return 0;
}
