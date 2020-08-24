#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)

int main(){

	long long n,w,l;
	cin>>n>>w>>l;
	vector<long long> hs;
	vector<long long> rs;
	long long hacum=0,racum=0;
	long long h,r;
	set<pair<long long,int>> conj;

	int i=0;
	REP(i,0,n){
		cin>>h>>r;
		if(l>h){
			cont.insert({(l-h)/r+1,i});
			hs.push_back(h);
			rs.push_back(r);
			i++;
		}
		else{
			hacum+=h;
			racum+=r;
		}
	}

	int cont=0;
	while(w>hacum){
		if(!set.empty()){
			auto p=set.
		}
		hacum+=racum;
		cont++;
	}
	cout<<cont<<endl;

	return 0;
}
