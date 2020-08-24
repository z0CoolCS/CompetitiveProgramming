#include <iostream>
#include <vector>
#include <string>
#include <string>
using namespace std;

int find(vector<int> &parents,int &node){
    if(parents[node]==-1)
        return node;
    return find(parents,parents[node]);
}
void unite(vector<int> &parents,int &nodel,int &noder){
     int pnodel=find(parents,nodel);
     int pnoder=find(parents,noder);
     if(pnoder!=pnodel)
        parents[pnoder]=pnodel;
}
bool isconnected(vector<int> &parents,int &nodel,int &noder){
    int pnodel=find(parents,nodel);
    int pnoder=find(parents,noder);
    if(pnodel==pnoder)
        return true;
    return false;
}
int main(){
    int cases,computers,pc1,pc2,corrects,incorrects;
    cin>>cases;
    string blank,line;;
    while(cases--){
        corrects=incorrects=0;
        cin>>computers;
        vector<int> parents(computers+1,-1);
        cin.ignore();
        while(getline(cin,line),line!=""){
            char action=line[0];
            line=line.substr(2,line.size());
            pc1=atoi(line.substr(0,line.find(" ")).c_str());
            pc2=atoi(line.substr(line.find(" ")+1,line.size()).c_str());
            if(action=='c'){
                unite(parents,pc1,pc2);
            }

            else{
                if(pc1==pc2)
                    corrects++;
                else{
                    if(isconnected(parents,pc1,pc2))
                        corrects++;
                    else
                        incorrects++;
                }
            }
        }
        cout<<corrects<<","<<incorrects<<endl;
        if(cases!=0)
            cout<<endl;
    }
    return 0;
}
