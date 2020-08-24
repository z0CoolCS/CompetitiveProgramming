#include <iostream>
#include <vector>
using namespace std;

int main(){

    int t,n,p;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>p;
        int aux;
        vector<bool> arr(n+1,0);
        for (int j = 0; j < p; ++j) {
            cin>>aux;
            for (int i = 1; i*aux <= n; i++) {
                if(i*aux%7!=6 && i*aux%7!=0)
                    arr[i*aux]=1;
            }
        }
        int cont=0;
        for (int k = 1; k <= n; ++k) {
            if(arr[k]==1)
                cont++;
        }

        cout<<cont<<endl;
    }

    return 0;
}
