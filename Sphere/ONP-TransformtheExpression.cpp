#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)

int main(){
  int t;
  cin>>t;
  cin.ignore();
  string exp;
  unordered_map<char,int> dict;
  dict['+']=1;
  dict['-']=2;
  dict['*']=3;
  dict['/']=4;
  dict['^']=5;

  while(t--){
    cin>>exp;
    stack<char> s;
    vector<char> ans;
    for(char &c:exp){
      if(c=='(')
        s.push(c);
      else if(c==')'){
        char aux=s.top();
        s.pop();
        while(aux!='('){
          ans.push_back(aux);
          aux=s.top();
          s.pop();
        }
      }
      else if(c=='+' || c=='-' || c=='*' || c=='/' || c=='^'){
        while(!s.empty() && s.top()!='(' && dict[s.top()]>=dict[c]){
          ans.push_back(s.top());
          s.pop();
        }
        s.push(c);
      }
      else
        ans.push_back(c);
      
    }
    while(!s.empty()){
      ans.push_back(s.top());
      s.pop();
    }
    for(char &x:ans)
      cout<<x;
    cout<<endl;
  }

  return 0;
}
