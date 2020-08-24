#include<iostream>

using namespace std;

int main(){
	string line;
	while(getline(cin,line),line!=""){
		int last=0;
		for(char &c:line){
			if(c=='B' || c=='F' || c=='P' || c=='V'){
				if(last!=1){
					cout<<1;
					last=1;
				}
			}
			else if(c=='C' || c=='G' || c=='J' || c=='K' || c=='Q' || c=='S' || c=='X' || c=='Z')
			{
				if(last!=2){
					cout<<2;
					last=2;
				}
			}
			else if(c=='D' || c=='T')
			{
				if(last!=3){
					cout<<3;
					last=3;
				}
			}
			else if(c=='L')
			{
				if(last!=4){
					cout<<4;
					last=4;
				}
			}
			else if(c=='M' || c=='N')
			{
				if(last!=5){
					cout<<5;
					last=5;;
				}
			}
			else if(c=='R')
			{

				if(last!=6){
					cout<<6;
					last=6;
				}
			}
			else
				last=0;
		}
		cout<<endl;

	}

	return 0;
}
