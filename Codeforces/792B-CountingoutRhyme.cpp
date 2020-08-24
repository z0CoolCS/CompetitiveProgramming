#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)

int main(){

  int n,k;
  cin>>n>>k;
  int knum;

  vector<int> nums(n+1);
  REP(i,1,n+1)
    nums[i]=i;

  int fpos=1;

  REP(i,0,k){
    cin>>knum;
    fpos=(fpos+knum)%n;
    if(fpos==0)
      fpos=n;
    cout<<nums[fpos]<<" ";
    nums.erase(nums.begin()+fpos,nums.begin()+fpos+1);
    n--;
  }
  cout<<endl;


  return 0;
}
