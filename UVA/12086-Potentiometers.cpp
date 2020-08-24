#include<iostream>

using namespace std;

int arr[2000005];
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
  string end;
  int ind,val,indx,indy;
  int caso=0;
  bool faro=false;
  while(cin>>n,n){
    if(faro)
      printf("\n");
    printf("Case %d:\n",++caso);
    clear();
    int nums[n];

    for(int i=0;i<n;i++)
      cin>>nums[i];

    for(int i=0;i<n;i++)
      update(i,nums[i]);
    cin.ignore();
    while(cin>>end,end!="END"){
      if(end=="M"){
        cin>>indx>>indy;
        indx--;
        indy--;
        printf("%d\n",sumxy(indx,indy));
      }
      else{
        cin>>ind>>val;
        ind--;
        update(ind,val-nums[ind]);
        nums[ind]=val;
      }
      cin.ignore();
    }
    faro=true;
  }
  return 0;
}
