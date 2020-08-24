#include<iostream>
#include<cmath>

using namespace std;

int main(){

  int t,num,i,j,mini,sum;
  cin>>t;
  while(t--){

    cin>>num;

    int arr[num];
    for(i=0;i<num;i++)
      cin>>arr[i];

    mini=1<<31-1;
    for(i=0;i<num;i++){
      sum=0;
      for(j=0;j<num;j++){
        if(j!=i)
          sum+=abs(arr[i]-arr[j]);
      }
      if(sum<mini)
        mini=sum;
    }
    cout<<mini<<endl;


  }


  return 0;
}
