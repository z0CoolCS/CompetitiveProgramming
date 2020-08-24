#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

pair<short,vector<int>> scoring(vector<short> values, vector<char> suits){
    set<int> conjvalues;
    set<char> conjsuits;

    for(int a:values)
        conjvalues.insert(a);
    short puntaje;
    if(conjvalues.size()==5)
    {
        for(int i:suits)
            conjsuits.insert(i);
        if(conjsuits.size()==1){
            bool faro=true;
            auto j=conjvalues.begin();
            for(auto i=++conjvalues.begin();i!=conjvalues.end();i++){
                if(*i-*j!=1){
                    faro=false;
                    break;
                }
                j=i;
            }
            if(faro)
                puntaje=8; //Setea para STRAIGHT FLUSH
            else
                puntaje=6; //Setea para FLUSH

        }
        else{
            bool faro=true;
            auto j=conjvalues.begin();
            for(auto i=++conjvalues.begin();i!=conjvalues.end();i++){
                if(*i-*j!=1){
                    faro=false;
                    break;
                }
                j=i;
            }
            if(faro)
                puntaje=5; //Setea para STRAIGH

            else
                puntaje=1; //Setea para High Card

        }
    }
    else if(conjvalues.size()==4){
        map<int,int> valuesrep;
        int valuescore;
        for(int i:values)
            values[i]++;
        for(auto i=valuesrep.begin();i!=valuesrep.end();i++){
            if(i->second>1)
                valuescore=i->first;

        }
        puntaje=2;
        conjvalues.clear();
        conjvalues.insert(valuescore);
    }


    else if(conjvalues.size()==3){
        map<int,int> valuesrep;
        bool faro=true;
        int valuescore;
        for(int i:values)
            values[i]++;
        for(auto i=valuesrep.begin();i!=valuesrep.end();i++){
            if(i->second>2){
                faro=false;
                valuescore=i->first;
                break;
            }
            if(i->second>1)
                valuescore=i->first;
        }
        if(faro)
            puntaje=4;
        else
            puntaje=3;
        conjvalues.clear();
        conjvalues.insert(valuescore);
    }
    else{
        map<int,int> valuesrep;
        int valuescore;
        for(int i:values)
            values[i]++;
        for(auto i=valuesrep.begin();i!=valuesrep.end();i++){
            if(i->second>3)
                valuescore=i->first;

        }
        puntaje=7;
        conjvalues.clear();
        conjvalues.insert(valuescore);

    }
    pair<short, vector<int>> score;
    score=make_pair(puntaje,conjvalues);
    return score;
}


int realValue(char value){
    switch (value){
        case 'A':
            return 14;
        case 'K':
            return 13;
        case 'Q':
            return 12;
        case 'J':
            return 11;
        case 'T':
            return 10;
        default:
            return value-48;
    }
}
short winningFinal(vector<int> punt1,vector<int>punt2){
    auto i=punt1.rbegin();
    auto j=punt2.rbegin();
    for(;i!=punt1.rend();i++,j++){
        if(*i>*j)
            return 1;
        else if (*i<*j)
            return 2;
    }
    return 3;
}
int main(){


    char value,suit;
    while(cin>>value){
        cin>>suit;
        vector<short> values1;
        vector<short> values2;
        vector<char> suits1;
        vector<char> suits2;

        values1.push_back(realValue(value));
        suits1.push_back(suit);
        cout<<"Hola0"<<endl;
        for(int i=0;i<4;i++){
            cin>>value>>suit;
            values1.push_back(realValue(value));
            suits1.push_back(suit);

        }
        cout<<"Hola1"<<endl;
        for(int i=0;i<5;i++){
            cin>>value>>suit;
            values2.push_back(realValue(value));
            suits2.push_back(suit);

        }
        cout<<"Hola2"<<endl;
        pair<short,set<int>> punt1=scoring(values1,suits1);
        pair<short,set<int>> punt2=scoring(values2,suits2);
        if(punt1.first>punt2.first)
            cout<<"Black wins."<<endl;
        else if(punt1.first<punt2.first)
            cout<<"White wins."<<endl;
        else{
            set<int> puntvalues1=punt1.second;
            set<int> puntvalues2=punt2.second;
            short d=winningFinal(puntvalues1,puntvalues2);
            if(d==1)
                cout<<"Black wins."<<endl;
            else if(d==2)
                cout<<"White wins."<<endl;
            else
                cout<<"Tie."<<endl;

        }
    }

    return 0;
}

