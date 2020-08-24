#include <iostream>
#include <stdio.h>
#include <map>
#include <iomanip>
using namespace std;

int main(){

    int cases,total;
    cin>>cases;
    string tree,blank;
    cin.ignore();
    getline(cin,blank);
    while(cases--){
        map<string,int> forest;
        total=0;
        while(getline(cin,tree),tree!=""){
            forest[tree]++;
            total++;
        }

        for(auto i=forest.begin();i!=forest.end();i++){
            cout<<i->first<<" "<<fixed<<setprecision(4)<<((i->second*100.0)/total)<<endl;
        }

        if(cases!=0)
            cout<<endl;
    }

    return 0;
}
