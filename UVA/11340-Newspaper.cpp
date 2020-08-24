#include<iostream>
#include<vector>

using namespace std;

int main(){
	int t,l;
	double value,total;
	cin>>t;
	string line;
	char charac;
	while(t--){
		cin>>l;
		cin.ignore();
		vector<double> dict(256,0);
		for(int i=0;i<l;i++){
			cin>>charac;
			cin>>value;
			dict[charac+128]=value;
			cin.ignore();
		}
		cin>>l;
		cin.ignore();
		total=0;
		for(int i=0;i<l;i++){
			getline(cin,line);
			for(char &c:line){
				total+=dict[c+128];
			}
		}
		cout.precision(2);
		cout<<fixed;
		total/=100;
		cout<<total<<"$\n";

	}

	return 0;
}
