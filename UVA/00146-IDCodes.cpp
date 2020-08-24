#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string word;
    while(getline(cin,word),word!="#"){
	    if(next_permutation(word.begin(),word.end()))
            	cout<<word<<endl;
	    else
		    cout<<"No Successor\n";
    }



    return 0;
}
