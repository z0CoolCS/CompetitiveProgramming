#include<iostream>

using namespace std;

int main(){

	int t,w,up,down,width;
	bool faro;
	cin>>t;

	while(t--){
		cin>>w;
		faro=true;
		cin>>up>>down;
		width=up-down;
		w--;
		while(w--){
			cin>>up>>down;
			if(width!=up-down)
				faro=false;
		}
		if(faro)
			cout<<"yes\n";
		else 
			cout<<"no\n";
		if(t!=0)
			cout<<endl;
		
	}
	return 0;
}
