#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

int main(){
	int n,amount,friends;
	bool faro=false;
	string name;

	while(cin>>n){
		if(faro)
			cout<<endl;
		unordered_map<string,int> names;
		vector<int> amounts(n,0);
		vector<string> posnames;
		for(int i=0;i<n;i++){
			cin>>name;
			names[name]=i;
			posnames.push_back(name);

		}
		for(int i=0;i<n;i++){
			cin>>name;
			cin>>amount;
			cin>>friends;
			if(friends!=0){
				int gift=amount/friends;
				amounts[names[name]]-=(gift*friends);
				for(int j=0;j<friends;j++){
					cin>>name;
					amounts[names[name]]+=gift;
				}
			}
		

		}
		for(int i=0;i<n;i++){
			cout<<posnames[i]<<" "<<amounts[i]<<endl;
		}
				

		faro=true;
	}

	return 0;
}
