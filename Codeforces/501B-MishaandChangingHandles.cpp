#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

string words[2010];
int indword[2010];

int size=0;

int find(string handle){
  for(int i=0;i<size;i++){
    if(words[i]==handle)
      return i;
  }
  return -1;
}
string lasthandle(string handle){
  int ind=find(handle);

  while(ind!=indword[ind])
    ind=indword[ind];

  return words[ind];
}
int main(){
  int q;
  cin>>q;
  string ol,ne;
  vector<string> orig;

  for(int i=0;i<2010;i++)
    indword[i]=i;

  while(q--){
    cin>>ol>>ne;
    int ind=find(ol);
    if(ind==-1){
      words[size]=ol;
      words[size+1]=ne;
      orig.push_back(ol);
      indword[size]=size+1;
      size+=2;
    }
    else{
      words[size]=ne;
      indword[ind]=size;
      size++;
    }
  }
  cout<<orig.size()<<endl;
  for(string s:orig)
    cout<<s<<" "<<lasthandle(s)<<endl;

  return 0;
}
