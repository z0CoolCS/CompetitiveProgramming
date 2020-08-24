#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool isacorn(bool graphs[26][26],int i) {
    for (int j = 0; j < 26; ++j) {
        if(graphs[i][j])
            return false;
    }
    return true;
}
void isarbol(bool graphs[26][26],bool isNode[],int i){
    isNode[i]=0;
    for (int j = 0; j < 26; ++j) {
        if(graphs[i][j]){
            if(isNode[j])
                isarbol(graphs,isNode,j);
        }
    }
}

int main(){

    int cases;
    string edge;
    cin>>cases;
    bool isNode[26]={0};
    while(cases--){
        bool graphs[26][26]{{0}};
        while(getline(cin,edge),edge[0]!='*'){
            graphs[edge[1]-'A'][edge[3]-'A']=1;
            graphs[edge[3]-'A'][edge[1]-'A']=1;
        }
        getline(cin,edge);
        for (char &c:edge) {
            if(c!=',')
                isNode[c-'A']=1;
        }

        int acorn=0,tree=0;
        for (int i = 0; i < 26; ++i) {
            if(isNode[i]){
                if(isacorn(graphs,i)){
                    acorn++;
                    isNode[i]=0;
                }
                else{
                    isarbol(graphs,isNode,i);
                    tree++;
                }
            }
        }
        cout<<"There are "<<tree<<" tree(s) and "<<acorn<<" acorn(s).\n";
    }

    return 0;
}
