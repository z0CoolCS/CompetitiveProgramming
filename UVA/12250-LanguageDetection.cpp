#include<iostream>
#include<string>

using namespace std;

int main(){
	string word;
	int i=1;
	while(cin>>word,word!="#"){
		if(word=="HELLO")
			cout<<"Case "<<i++<<": ENGLISH\n";
		else if(word=="HOLA")
			cout<<"Case "<<i++<<": SPANISH\n";
		else if(word=="HALLO")
			cout<<"Case "<<i++<<": GERMAN\n";
		else if(word=="BONJOUR")
			cout<<"Case "<<i++<<": FRENCH\n";
		else if(word=="CIAO")
			cout<<"Case "<<i++<<": ITALIAN\n";
		else if(word=="ZDRAVSTVUJTE")
			cout<<"Case "<<i++<<": RUSSIAN\n";
		else
			cout<<"Case "<<i++<<": UNKNOWN\n";

	}
	return 0;
}
	
