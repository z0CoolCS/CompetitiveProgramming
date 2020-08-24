#include<bits/stdc++.h>

using namespace std;

unordered_map<int,int> count_p;

int main(){


  int n;
  scanf("%d",&n);
  int nums[n];
  for(int &i:nums)
    scanf("%d",&i);

  for(int i=0;i<n;i++){
    for(int j=2;j*j<=nums[i];j++){
      if(nums[i]%j==0)
        count_p[j]++;
      while(nums[i]%j==0) nums[i]/=j;
    }
    if(nums[i]>1)
      count_p[nums[i]]++;
  }

  int maxi=1;
  for(auto it=count_p.begin();it!=count_p.end();it++){
    maxi=max(maxi,(*it).second);
  }
  printf("%d\n",maxi);
  return 0;
}
