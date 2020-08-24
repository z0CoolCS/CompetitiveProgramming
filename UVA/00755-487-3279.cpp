#include<iostream>
#include<string>
#include<map>
#include<sstream>

using namespace std;

int main(){
	int n;
	cin>>n;
	bool faro=false;
	string blank;
	while(n--){
		if(faro)
			cout<<endl;
		
		
		int phones;
		cin>>phones;
		getline(cin,blank);
		map<string,int> dict;
		while(phones--){
			char c;
			string phone,line;
			getline(cin,line);
			stringstream s(line);

			while(s>>c){
				if((c>='0' && c<='9') || (c>='A' && c<'Z' && c!='Q')){
					if(c>='A' && c<='C'){
						phone.append("2");
					}
					else if(c>='D' && c<='F'){
						phone.append("3");
					}
					else if(c>='G' && c<='I'){
						phone.append("4");
					}
					else if(c>='J' && c<='L'){
						phone.append("5");
					}
					else if(c>='M' && c<='O'){
						phone.append("6");
					}
					else if(c>='P' && c<='S'){
						phone.append("7");
					}
					else if(c>='T' && c<='V'){
						phone.append("8");
					}
					else if(c>='W' && c<='Y'){
						phone.append("9");
					}
					else{
						string car(1,c);
						phone.append(car);
					}
				}	

			}
			dict[phone]++;

		}
		bool faro2=false;
		for(auto c:dict){
			if(c.second>1){
				faro2=true;
				cout<<c.first.substr(0,3)<<"-"<<c.first.substr(3,7)<<" "<<c.second<<endl;
			}
		}
		if(!faro2)
			cout<<"No duplicates."<<endl;	


		faro=true;
	}

	return 0;
}
