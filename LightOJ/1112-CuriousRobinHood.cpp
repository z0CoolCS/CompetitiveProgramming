#include<iostream>

using namespace std;

int arr[100005];
int n;
void clear(){
  for(int i=0;i<=n+1;i++)
    arr[i]=0;
}
void update(int i,int val){
  for(;i<n;i=i|(i+1))
    arr[i]+=val;
}
int sum(int i){
  int sumacum=0;
  for(;i>=0;i=(i&(i+1))-1)
    sumacum+=arr[i];
  return sumacum;
}
int sumxy(int x,int y){
  return sum(y)-sum(x-1);
}

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t,q;
  cin>>t;
  int ind,val,indx,indy;
  int caso=0;
  int act;
  while(t--){
    cin>>n>>q;
    printf("Case %d:\n",++caso);
    clear();
    int nums[n];
    for(int i=0;i<n;i++)
      cin>>nums[i];

    for(int i=0;i<n;i++)
      update(i,nums[i]);

    while(q--){
      cin>>act;
      if(act==1){
        cin>>ind;
        printf("%d\n",nums[ind]);
        update(ind,-nums[ind]);
        nums[ind]=0;
      }
      else if(act==2){
        cin>>ind>>val;
        update(ind,val);
        nums[ind]+=val;
      }
      else{
        cin>>indx>>indy;
        printf("%d\n",sumxy(indx,indy));
      }
    }
  }
  return 0;
}
