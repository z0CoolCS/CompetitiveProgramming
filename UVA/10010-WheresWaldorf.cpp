#include <iostream>
#include <string>
#include <algorithm>
#include <ctype.h>
using namespace std;
char matrix[52][52]={'.'};
bool isInPosition(int i,int j,int m,int n,string word){
    int x;
    int sizew=word.size();
    for (x=0; i-x>0 && word[x]==matrix[i-x][j];x++) { if (x==sizew-1) return 1;}
    for (x=0; i+x<=m  && word[x]==matrix[i+x][j];x++) { if (x==sizew-1) return 1;}
    for (x=0; j-x>0 && word[x]==matrix[i][j-x];x++) { if (x==sizew-1) return 1;}
    for (x=0; j+x<=n  && word[x]==matrix[i][j+x];x++) { if (x==sizew-1) return 1;}
    for (x=0; i-x>0 && j-x>0 && word[x]==matrix[i-x][j-x];x++) { if (x==sizew-1) return 1;}
    for (x=0; i+x<=m  && j-x>0 && word[x]==matrix[i+x][j-x];x++) { if (x==sizew-1) return 1;}
    for (x=0; i-x>0 && j+x<=n  && word[x]==matrix[i-x][j+x];x++) { if (x==sizew-1) return 1;}
    for (x=0; i+x<=m  && j+x<=n  && word[x]==matrix[i+x][j+x];x++) { if (x==sizew-1)  return 1;}
    return 0;
}
void searchword(int m,int n,string word){
    int posx=m,posy=n;
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(matrix[i][j]==word[0] && isInPosition(i,j,m,n,word)){
                if(i<posx){
                    posx=i;
                    posy=j;
                }
                else if(i==posx){
                    if(j<posy){
                        posx=i;
                        posy=j;
                    }
                }

            }
        }
    }

    cout<<posx<<" "<<posy<<endl;
}
int main() {
    int cases,m,n;
    cin>>cases;
    while(cases--){
    cin.ignore(10,'\n');
    cin>>m>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin>>matrix[i][j];
            matrix[i][j]=tolower(matrix[i][j]);
        }

    }
    int cwords;
    cin>>cwords;
    string aux;
    while(cwords--){
        cin>>aux;
        transform(aux.begin(),aux.end(),aux.begin(),::tolower);
        searchword(m,n,aux);
    }
    if(cases)
        cout<<endl;
    }
    return 0;
}
