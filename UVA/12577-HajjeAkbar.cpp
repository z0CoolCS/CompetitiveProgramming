#include<iostream>
#include<string>

using namespace std;

int main(){
	string word;
	int i=1;
	while(cin>>word,word!="*"){
		if(word=="Hajj")
			cout<<"Case "<<i++<<": Hajj-e-Akbar\n";
		else
			cout<<"Case "<<i++<<": Hajj-e-Asghar\n";
	}

	return 0;
}
