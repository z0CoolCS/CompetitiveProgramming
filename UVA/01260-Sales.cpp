#include<iostream>

using namespace std;

int main(){

  int t,n,cont,i,j;
  cin>>t;

  while(t--){
    cin>>n;
    cont=0;
    int arr[n];
    for(i=0;i<n;i++)
      cin>>arr[i];
    for(i=1;i<n;i++){
      for(j=i-1;j>=0;j--){
        if(arr[i]>=arr[j])
          cont++;
      }
    }

    cout<<cont<<endl;
  }

  return 0;
}
