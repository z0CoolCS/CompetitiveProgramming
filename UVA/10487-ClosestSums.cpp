#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){

  int n,m,i,j,num,sum,mini;
  int ind=0;
  while(cin>>n,n){
    ind++;
    cout<<"Case "<<ind<<":\n";
    int arr[n];
    for(i=0;i<n;i++)
      cin>>arr[i];

    sort(arr,arr+n);
    cin>>m;
    while(m--){
      cin>>num;
      mini=1<<31-1;
      for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
          if(abs(num-arr[i]-arr[j])<mini){
            mini=abs(num-arr[i]-arr[j]);
            sum=arr[i]+arr[j];
          }
        }
      }
      cout<<"Closest sum to "<<num<<" is "<<sum<<"."<<endl;
    }

  }

  return 0;
}
