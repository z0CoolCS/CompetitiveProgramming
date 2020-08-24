#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)

int main(){
  int t,n;
  cin>>t;
  while(t--){
    cin>>n;
    int arr[n];
    REP(i,0,n)
      cin>>arr[i];

    if(next_permutation(arr,arr+n)){
      REP(i,0,n)
        cout<<arr[i];
      cout<<endl;
    }
    else
      cout<<-1<<endl;

  }

  return 0;
}
