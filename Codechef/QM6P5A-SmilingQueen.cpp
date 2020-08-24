#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)

int main(){

  int t,s;
  cin>>t;
  string line,word,ans;
  while(t--){

    unordered_map<string,bool> dict;

    cin>>s;
    //This sentence helps us to ommit the '\n' command and not getting it for getline later
    cin.ignore();

    //Useful macro
    vector<string> stringnos;

    int cont=0;

    REP(i,0,s){

      //Get the sentence
      getline(cin,line);
      //Get the answer if she smile or not
      getline(cin,ans);

      //Create a vector to keep the sentences when the answer is "no smile"

      if(ans=="yes"){
        stringstream s(line);
        //In first moment, all words make happy to her
        while(s>>word){
          //look if the word is already true for no repetition counting
          if(!dict[word]){
            dict[word]=1;
            cont++;
          }
        }
      }
      else
        stringnos.push_back(line);
    }

    //Changing the words when she is not smile
    for(string &l:stringnos){
      stringstream s(l);
      while(s>>word){
        if(dict[word])
          cont--;
        dict[word]=0;
      }
    }
    cout<<cont<<endl;

  }

  return 0;
}
