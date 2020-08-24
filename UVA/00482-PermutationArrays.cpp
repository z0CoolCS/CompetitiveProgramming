#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <map>
#include <iterator>
using namespace std;

int main(){
    int cases;
    string val2;
    cin>>cases;
    string line;
    string blankline;
    cin.ignore();
    while(cases--){

        getline(cin,blankline);
        vector<int> pos;
        vector<string> values;
        getline(cin,line);
        istringstream iss(line);
        pos= vector<int>(istream_iterator<int>(iss), istream_iterator<int>());

        getline(cin,line);
        istringstream iss2(line);
        values= vector<string>(istream_iterator<string>(iss2), istream_iterator<string>());

        map<int,string> dict;
        for(int i=0;i<values.size();i++){
            dict[pos[i]]=values[i];
        }
        for(int i=1;i<=values.size();i++){
            cout<<dict[i]<<endl;
        }
        if(cases!=0)
            cout<<endl;
    }

    return 0;
}
