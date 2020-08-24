#include<iostream>
#include<algorithm>
#include<unordered_map>

using namespace std;

int main(){


  int n;
  int i,j,k;
  while(cin>>n,n){
    int nums[n];
    unordered_map<int,bool> dict;
    for(i=0;i<n;i++){
      cin>>nums[i];
      dict[nums[i]]=1;
    }

    sort(nums,nums+n);

    bool faro=true;
    int diff;
    for(i=n-1;i>=0 && faro;i--){
      for(j=0;j<n && faro;j++){
        if(i==j) continue;
        for(k=j+1;k<n && faro;k++){
          if(i==k) continue;
          diff=nums[i]-(nums[j]+nums[k]);
          if(diff==nums[j] || diff==nums[k] || diff==nums[i]) continue;
          if(dict[diff]){
            cout<<nums[i]<<endl;
            faro=false;
          }
        }
      }
    }

    if(faro)
      cout<<"no solution\n";

  }

  return 0;
}
