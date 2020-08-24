#include<iostream>
#include<unordered_map>

using namespace std;

bool validate(unordered_map<int,bool> &dict,unordered_map<int,int> &pos,int *arr,int n){

    int r,i,j;
    for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
        r=arr[j]-arr[i];
        if(dict[arr[j]+r]){
          if(pos[arr[j]+r]>pos[arr[j]])
            return false;
        }
      }
    }

    return true;
}
int main(){

  int n,i,j;
  char c;
  while(cin>>n,n){

    unordered_map<int,bool> dict;
    unordered_map<int,int> pos;
    int arr[n];
    cin>>c;
    bool faro=true;

    for(i=0;i<n;i++){
      cin>>arr[i];
      dict[arr[i]]=1;
      pos[arr[i]]=i;
    }

    if(validate(dict,pos,arr,n))
      cout<<"yes"<<endl;
    else
      cout<<"no"<<endl;

  }

  return 0;
}
