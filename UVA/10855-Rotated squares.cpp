#include <iostream>
#include <vector>
using namespace std;
void changecharacter(char &a,char &b,char &c,char &d){
    char temp=a;
    a=b;
    b=c;
    c=d;
    d=temp;
}
void rotate(vector<vector<char>> &vec,int size){
    for (int i = 0; i < size/2; ++i) {
        for (int j = 0; j < (size+1)/2; ++j) {
            changecharacter(vec[i][j],vec[size-1-j][i],vec[size-1-i][size-1-j],vec[j][size-1-i]);
        }
    }
}
void input(vector<vector<char>> &vec,int size){
    char c;
    for (int i = 0; i < size; ++i) {
        vector<char> row;
        for (int j = 0; j < size; ++j) {
            cin>>c;
            row.push_back(c);
        }
        vec.push_back(row);
        cin.ignore(1,'\n');
    }
}

bool veredict(vector<vector<char>> &mmax,vector<vector<char>> &mmin,int &size,int &posx,int &posy){
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if(mmin[i][j]!=mmax[posx+i][posy+j])
                return 0;
        }
    }
    return 1;
}
int main(){
    int N,n;
    char c;

    while(cin>>N>>n,N){
        vector<vector<char>> mmax;
        vector<vector<char>> mmin;
        input(mmax,N);
        input(mmin,n);
        int cont;
        for (int z = 0; z < 4; ++z) {
            cont=0;
            for (int i = 0; i < N-n+1; ++i) {
                for (int j = 0; j < N-n+1; ++j) {
                    if(mmax[i][j]==mmin[0][0])
                        cont+=veredict(mmax,mmin,n,i,j);
                }
            }
            cout<<cont;
            if(z!=3)
                cout<<" ";
            rotate(mmin,n);    
        }
        cout<<endl;
        

    }

    return 0;
}
