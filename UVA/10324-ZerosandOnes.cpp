#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	string cad;
	int i,j,t,maxi,mini,ncase=1;
	bool faro=true,faroaux,faroanswer;
	while(faro){
		getline(cin,cad);
		if(cad.empty())
		{
			faro=false;
			break;
		}
		cout<<"Case "<<ncase++<<":\n";
		cin>>t;
		while(t--){
			cin>>i>>j;
			faroanswer=true;
			maxi=max(i,j);
			mini=min(i,j);
			faroaux=cad[mini]-'0';
			for(i=mini+1;i<=maxi;i++){
				if(faroaux!=cad[i]-'0'){
					faroanswer=false;
					break;
				}
			}
			if(faroanswer)
				cout<<"Yes\n";
			else
				cout<<"No\n";
		}
		cin.ignore();
	}

	return 0;
}
