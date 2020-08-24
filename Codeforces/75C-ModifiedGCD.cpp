#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)
#define REV(i,a,b) for(int i=a;i>=b;i--)

int gcd(int a,int b){
  int tmp;
  while(b>0){
    tmp=a%b;
    a=b;
    b=tmp;
  }
  return a;
}
vector<int> d;

void divisors(int g){
  REP(i,1,sqrt(g)+1){
    if(g%i==0){
      d.push_back(i);
      if(g/i!=i)
        d.push_back(g/i);
    }
  }
}

int main(){

  int a,b,n,l,u,left,right,med;
  cin>>a>>b;
  cin>>n;
  int g=gcd(a,b);
  divisors(g);
  sort(d.begin(),d.end());
  int size=d.size();
  while(n--){
    cin>>l>>u;
    right=size-1;
    left=0;
    while(left<right){
      med=left+(right-left+1)/2;
      if(d[med]>u)
        right=med-1;
      else
        left=med;
    }
    if(d[left]<=u && d[left]>=l)
      cout<<d[left]<<endl;
    else
      cout<<-1<<endl;
  }


  return 0;
}
