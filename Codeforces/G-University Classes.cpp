#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    char groups[n][7];
    for(int i=0;i<n;i++){
        for(int j=0;j<7;j++){
            cin>>groups[i][j];
        }
    }
    int sum=0,aux;
    for(int i=0;i<7;i++){
        aux=0;
        for(int j=0;j<n;j++){
            aux+=(groups[j][i]-'0');
        }
        if(aux>sum)
            sum=aux;
    }
    cout<<sum<<endl;
    return 0;
}
