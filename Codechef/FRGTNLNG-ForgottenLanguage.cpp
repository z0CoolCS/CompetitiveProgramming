#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)
#define PB push_back

int main(){
  int t;
  int n,k,l;
  string word;
  cin>>t;
  while(t--){
    cin>>n>>k;
    unordered_map<string,bool> dict;
    vector<string> words; 
    REP(i,0,n){
      cin>>word;
      words.PB(word);
    }
    REP(i,0,k){
      cin>>l;
      REP(j,0,l){
        cin>>word;
        dict[word]=1;
      }
    }
    bool space=false;
    for(string w:words){
      if(space)
        cout<<" ";
      if(dict[w])
        cout<<"YES";
      else
        cout<<"NO";
      space=true;

    }
    cout<<endl;
  }

  return 0;
}
