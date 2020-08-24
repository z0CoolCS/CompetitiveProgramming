#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)

int main(){
  int t;
  string word;
  cin>>t;
  while(t--){
    cin>>word;
    int start=0,end=word.size()-1;
    int c[28]={0};
    while(start<end){
      c[word[start]-'a']++;
      c[word[end]-'a']--;
      start++;
      end--;
    }
    bool faro=true;
    REP(i,0,28){
      if(c[i]!=0){
        faro=false;
        break;
      }
    }
    if(faro)
      cout<<"YES\n";
    else
      cout<<"NO\n";
  }
  return 0;
}
