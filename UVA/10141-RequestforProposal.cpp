#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

struct proposal{
	string prop;
	int req;
	int pos;
	float price;

	bool operator<(const proposal &other){
		if(other.req==req)
		{
			if(other.price==price)
				return other.pos>pos;
			return other.price>price;
		}
		return other.req<req;
	}
};

int main(){

	int req,nprop,reqprop,ind=1;
	string cadreq,prop;
	float price;
	bool faro=false;

	while(cin>>req>>nprop,req || nprop){
		cin.ignore();
		if(faro)
			cout<<endl;
		vector<proposal> proposals;
		for(int i=0;i<req;i++)
			getline(cin,cadreq);
		for(int i=0;i<nprop;i++){
			getline(cin,prop);
			cin>>price>>reqprop;
			cin.ignore();
			proposal p{prop,reqprop,i,price};
			proposals.push_back(p);
			for(int j=0;j<reqprop;j++)
				getline(cin,cadreq);
		}
		sort(proposals.begin(),proposals.end());
		cout<<"RFP #"<<ind++<<endl;
		cout<<proposals[0].prop<<endl;
		faro=true;

		
		
	}

	return 0;
}
