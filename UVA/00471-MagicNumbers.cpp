#include<iostream>
#include<climits>

using namespace std;

int main(){

  int n;
  cin>>n;
  long long num,aux,i;
  int size,cont;
  string cad,cadi;
  while(n--){

    cin>>num;
    i=1;

    while(100000000000L/i>=num){
      bool arr[10]={0};
      bool arri[10]={0};
      cadi=to_string(i);
      size=cadi.size();
      cont=0;
      for(char c:cadi){
        if(arri[c-'0'])
          break;
        arri[c-'0']=1;
        cont++;
      }
      if(size==cont){

        aux=num*i;
        cad=to_string(aux);
        size=cad.size();
        cont=0;
        for(char c:cad){
          if(arr[c-'0'])
           break;
         arr[c-'0']=1;
         cont++;
        }
        if(size==cont)
         cout<<aux<<" / "<<i<<" = "<<num<<endl;
      }
      i++;
    }
    if(n)
      cout<<endl;
  }

  return 0;
}
