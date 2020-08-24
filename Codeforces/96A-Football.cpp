#include <iostream>
#include <string>
using namespace std;
int main(){
     int cont=0;
     char n;
     bool aux=true,res=false;
     while(cin.get(n),n!='\n')
     {
       if(n=='1' && !aux){
         aux=true;
         cont=0;
         }
       else if(n=='0' && aux){
         aux=false;
         cont=0;
         }
       cont++;
       if(cont>6)
          res=true;

    }
    if(res)
     cout<<"YES"<<endl;
    else
     cout<<"NO"<<endl;
   return 0;
}
