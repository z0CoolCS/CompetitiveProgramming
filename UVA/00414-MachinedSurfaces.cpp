#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
	int n;
	string line;
	while(cin>>n,n){
		cin.ignore();
		int min=25,l,u;
		vector<pair<int,int>> limits;
		bool faro;
		for(int i=0;i<n;i++){
			getline(cin,line);
			faro=true;
			l=0,u=0;
			for(int j=1;j<25;j++){
				if(line[j]==' ' && faro){
					l=j;
					faro=false;
				}	
				else if(line[j]=='X' && !faro)
				{
					u=j;
					break;
				}
			}
			if(u-l<min)
				min=u-l;
			limits.push_back(make_pair(l,u));
		}
		int acum=0;
		for(int i=0;i<n;i++)
			acum+=(limits[i].second-limits[i].first-min);
		cout<<acum<<endl;

	}

	return 0;
}
