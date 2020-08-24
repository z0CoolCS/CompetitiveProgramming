#include <iostream>
#include <bitset>
using namespace std;

int main(){

    int n,m;
    int start,end,intervalo;
    bool faro=false;
    bitset<1000002> b;
    while(cin>>n>>m,n || m){
        b.reset();
        faro=false;
        for (int i = 0  ; i < n; ++i){
            cin>>start>>end;
            for (int j = start+1; j <=end && !faro; ++j){
                if(b[j]==1)
                        faro=true;
                else
                    b[j]=1;
            }
        }

        for (int i = 0; i < m; ++i){
        cin>>start>>end>>intervalo;
        while(start<=1000000 && !faro){
            end=(end<=1000000)?end:1000000;
            for(int j = start+1; j <=end && !faro; ++j){
                if(b[j]==1) 
                        faro = true;
                else
                    b[j]=1;
            }
            start+=intervalo;
            end+=intervalo;
         }
        }
        if(faro)
            cout<<"CONFLICT\n";
        else
            cout<<"NO CONFLICT\n";

    }
    return 0;
}
