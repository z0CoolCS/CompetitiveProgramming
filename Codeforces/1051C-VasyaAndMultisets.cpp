#include<bits/stdc++.h>

using namespace std;

int main(){

  int n,x;
  cin>>n;
  int num[n];
  unordered_map<int,int> dict;
  unordered_map<int,char> state;

  for(int i=0;i<n;i++){
    cin>>num[i];
    dict[num[i]]++;
    state[num[i]]=' ';
  }

  int cont=0,cont_aux=0;

  bool faro=false;

  for(int i=0;i<n;i++){
    if(dict[num[i]]==1 && state[num[i]]==' '){
      cont++;
      if(faro)
        state[num[i]]='A';
      else
        state[num[i]]='B';
      faro=!faro;
    }
    else if(dict[num[i]]>2)
      cont_aux++;
  }
  char opc;

  if(cont & 1){
    if(cont_aux>0){
      int ind=-1;
      cout<<"YES\n";
      bool faro2=true;
      for(int i=0;i<n;i++){
        if(state[num[i]]!=' ')
          cout<<state[num[i]];
        else{
          if(faro2 && dict[num[i]]>2){
            if(faro){
              cout<<'A';
              opc='A';
            }
            else{
              cout<<'B';
              opc='B';
            }
            faro2=false;
            ind=num[i];
          }
          else{
            if(num[i]==ind){
              if(opc=='A')
                cout<<'B';
              else
                cout<<'A';
            }
            else
              cout<<'A';
          }
        }
      }
    }
    else
      cout<<"NO";
  }
  else{
    cout<<"YES\n";
    for(int i=0;i<n;i++){
      if(state[num[i]]==' ')
        cout<<'A';
      else
        cout<<state[num[i]];
    }
  }
  cout<<endl;

  return 0;
}
