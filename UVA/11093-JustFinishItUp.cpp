#include<iostream>
#include<vector>

using namespace std;

int main(){
	int t,num;
	cin>>t;

	while(t--){
		int stations;
		cin>>stations;
		vector<int> ps;
		vector<int> qs;
		bool signal=false;
		int acum=0,tot=0,pos;

		for(int i=0;i<stations;i++){
			cin>>num;
			ps.push_back(num);
		}
		for(int i=0;i<stations;i++){
			cin>>num;
			acum+=ps[i]-num;
			tot+=ps[i]-num;
			if(acum>=0){
				if(!signal)
					pos=i;
				signal=true;
			}
			else{
				signal=false;
				acum=0;
			}

			qs.push_back(num);
		}

		if(tot>=0)
			cout<<"Case "<<index++<<": Possible from station "<<++pos<<endl;
		else
			cout<<"Case "<<index++<<": Not possible"<<endl;


	}

	return 0;
}
