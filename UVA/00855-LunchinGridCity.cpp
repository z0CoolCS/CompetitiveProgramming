#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

	int t;
	cin>>t;
	int s,a,f;
	int sf,af;
	while(t--){
		cin>>s>>a>>f;
		vector<int> fstreets;
		vector<int> favenues;


		for(int i=0;i<f;i++){
			cin>>sf>>af;
			fstreets.push_back(sf);
			favenues.push_back(af);
		}
		sort(fstreets.begin(),fstreets.end());
		sort(favenues.begin(),favenues.end());
		int median=(f%2?f/2:f/2-1);
		cout<<"(Street: "<<fstreets[median]<<", Avenue: "<<favenues[median]<<")\n";


	}

	return 0;
}
