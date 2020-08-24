#include <iostream>
#include <climits>
#include <map>
#include <algorithm>
using namespace std;


int main(){
    int i,j;
    int cont=0;
    bool faro=false;

    while(cin>>i>>j,i!=0 && j!=0){
        if(faro)
            cout<<endl;
        short matrix[102][102]={0};
        char aux[102][102]={'.'};
        cont++;
        for(int r=1;r<i+1;r++){
            for(int c=1;c<j+1;c++){
                char character;
                cin>>character;
                if(character!='.'){
                    aux[r][c]='*';
                    matrix[r][c+1]++;
                    matrix[r+1][c]++;
                    matrix[r-1][c]++;
                    matrix[r][c-1]++;
                    matrix[r+1][c+1]++;
                    matrix[r-1][c-1]++;
                    matrix[r+1][c-1]++;
                    matrix[r-1][c+1]++;
                }

            }
        }
        cout<<"Field #"<<cont<<":"<<endl;
        for(int r=1;r<i+1;r++) {
            for (int c = 1; c < j + 1; c++) {
                if(aux[r][c]!='*')
                    cout<<matrix[r][c];
                else
                    cout<<'*';
            }
            cout<<endl;
            }

        faro=true;
        }

    return 0;
}

