#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main(){

	string cad,line;
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		getline(cin,line);
		stringstream s(line);
		int contm=0,contf=0,cont=0;
		while(s>>cad){
			cont++;
			for(int i=0;i<2;i++)
			{
				if(cad[i]=='F')
					contf++;
				else
					contm++;
			}
		}
		if(contm==contf && cont>1)
			cout<<"LOOP\n";
		else
			cout<<"NO LOOP\n";
		
	}

	return 0;
}
