#include<iostream>
#include<string>

using namespace std;

int main(){
  short n;
  cin>>n;
  string arr[n];
  bool faro=false;
  for(int i=0;i<n;i++){
    string cad;
    cin>>cad;
    if(cad[0]=='O' && cad[1]=='O' && !faro){
      cad="++"+cad.substr(2,5);
      faro=true;
    }
    else if(cad[3]=='O' && cad[4]=='O' && !faro){
      cad=cad.substr(0,3)+"++";
      faro=true;
    }
    arr[i]=cad;
  }
  if(faro)
  {
    cout<<"YES"<<endl;
    for(string cad:arr)
      cout<<cad<<endl;
  }
  else
    cout<<"NO"<<endl;

  return 0;
}
