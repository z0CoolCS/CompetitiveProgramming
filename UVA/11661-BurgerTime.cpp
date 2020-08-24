#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main(){

	string line;
	int len;
	while(cin>>len,len){
		cin.ignore();
		getline(cin,line);
		int d=len,posr=-1,posd=-1;
		for(int i=0;i<len;i++){
			if(line[i]!='.'){

				if(line[i]=='Z')
				{
					d=0;
					break;
				}	
				else if(line[i]=='R')
				{
					posr=i;
					if(posd!=-1){
						if(abs(posd-i)<d)
							d=abs(posd-i);
					}

				}
				else{
					posd=i;
					if(posr!=-1){
						if(abs(posr-i)<d)
							d=abs(posr-i);
					}
				}
			}
		}
		cout<<d<<endl;

	}

	return 0;
}
