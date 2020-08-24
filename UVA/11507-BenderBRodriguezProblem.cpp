#include<iostream>
#include<string>

using namespace std;

int main(){
	int lwire;
	string dir;
	while(cin>>lwire,lwire){
		cin.ignore();
		string org="+x";
		for(int i=0;i<lwire-1;i++){
			cin>>dir;
			if(dir=="-x"){
				if(org[1]=='y'){
					if(org[0]=='-')
						org="+y";
					else
						org="-y";
				}
				else if(org=="+x")
					org=dir;
			}
			else if(dir[1]=='y'){
				if(org=="+x")
					org=dir;
				else if(org=="-x"){
					if(dir[0]=='+')
						org="-y";
					else
						org="+y";
				}
				else if(org=="+y"){
					if(dir[0]=='+')
						org="-x";
					else
						org="+x";

				}
				else if(org=="-y"){
					if(dir[0]=='-')
						org="-x";
					else
						org="+x";
				}
			}
			else if(dir[1]=='z'){
				if(org=="+x")
					org=dir;
				else if(org=="-x"){
					if(dir[0]=='+')
						org="-z";
					else
						org="+z";
				}
				else if(org=="+z"){
					if(dir[0]=='+')
						org="-x";
					else
						org="+x";
				}
				else if(org=="-z"){
					if(dir[0]=='-')
						org="-x";
					else
						org="+x";
				}
			}
				
		}
		cout<<org<<endl;
	}

	return 0;
}
