#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){

  int n,m;

  cin>>n>>m;

  int d=m/n;
  if(m-9*n>0 || (n>=2 && m==0)){
    cout<<-1<<" "<<-1<<endl;
  }
  else{
    string mini="";
    string maxi="";
    int tmp=m;
    for(int i=n-1;i>=0;i--){
      if(tmp>=9){
        maxi+=to_string(9);
        tmp-=9;
      }
      else{
        if(tmp>0){
          maxi+=to_string(tmp);
          tmp=0;
        }
        else
          maxi+=to_string(0);
      }
      if(m>=9*i){
        mini+=to_string(m-9*i);
        m-=(m-9*i);
      }
      else{
        if(i==n-1){
          mini+=to_string(1);
          m--;
          continue;
        }
        if(i>=1){
          mini+=to_string(0);
        }
        else
          mini+=to_string(m);
      }
    }
    cout<<mini<<" "<<maxi<<endl;
  }

}
