#include<iostream>
#include<queue>

using namespace std;

void fillspace(queue<pair<int,int>> &q,int space,int m,int ir,int fl,bool &faro){

	if(space==0){
		if(ir==fl)
			faro=true;
		return;
	}
	for(int i=0;i<m;i++){
		auto t=q.front();
		q.pop();
		if(t.first==ir)
			fillspace(q,space-1,m-1,t.second,fl,faro);
		else if(t.second==ir)
			fillspace(q,space-1,m-1,t.first,fl,faro);
		
		q.push(t);
		if(faro)
			return;
	}
}
int main(){

	int n,m;
	int il,ir;
	int fl,fr;
	int a,b;
	while(cin>>n,n){
		cin>>m;
		cin>>il>>ir;
		cin>>fl>>fr;
		queue<pair<int,int>> q;
		bool faro=false;
		for(int i=0;i<m;i++){
			cin>>a>>b;
			q.push(make_pair(a,b));
		}

		fillspace(q,n,m,ir,fl,faro);

		if(faro)
			cout<<"YES\n";
		else
			cout<<"NO\n";

	}

	return 0;
}
