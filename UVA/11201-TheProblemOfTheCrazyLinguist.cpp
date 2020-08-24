#include<bits/stdc++.h>

using namespace std;
int size;
double prom;
int cont;
unordered_map<char,int> dict_c;
double p[26]={12.53,1.42,4.68,5.86,13.68,0.69,1.01,0.70,6.25,0.44,0.00,4.97,3.15,6.71,8.68,2.51,0.88,6.87,7.98,4.63,3.93,0.90,0.02,0.22,0.90,0.52};
int odd[]={'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z'};
int even[]={'a','e','i','o','u'};

void backtracking(string &word,int ind){
  if(ind==size+1){
    double tmp=0;
    cont++;
    for(int i=1;i<=size;i++)
      tmp+=p[word[i-1]-'a']*i;
    prom+=tmp;
    return;
  }
  if(ind%2){
    for(int i=0;i<21;i++){
      if(dict_c[odd[i]]>=2)
        continue;
      dict_c[odd[i]]++;
      word+=odd[i];
      backtracking(word,ind+1);
      word.pop_back();
      dict_c[odd[i]]--;
    }
  }
  else{
    for(int i=0;i<5;i++){
      if(dict_c[even[i]]>=2)
        continue;
      dict_c[even[i]]++;
      word+=even[i];
      backtracking(word,ind+1);
      word.pop_back();
      dict_c[even[i]]--;
    }
  }
}

int main(){


  int t;
  cin>>t;
  string word;
  map<pair<char,int>,double> dict;


  while(t--){
    prom=cont=0;
    cin>>word;
    size=word.size();
    if(size==1){
      cout<<"above or equal\n";
      continue;
    }

    if(!dict[{word[0],size}]){
      string cad="";
      cad+=word[0];
      dict_c[word[0]]++;
      backtracking(cad,2);
      dict[{word[0],size}]=prom/cont;
      dict_c[word[0]]--;
    }
    //dict[size]=floorf(dict[size]*100)/100.0;
    double tmp=0;
    for(int i=1;i<=size;i++)
      tmp+=p[word[i-1]-'a']*i;
    if(tmp-dict[{word[0],size}]>=0)
      cout<<"above or equal\n";
    else
      cout<<"below\n";
  }

  return 0;
}
