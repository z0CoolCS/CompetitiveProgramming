#include<iostream>
#include<vector>

using namespace std;

void verificate(vector<vector<int>> &list,bool *visits,int cont,int &m,bool *rest,bool *cats,int i,int &res){

	if(cats[i])
		cont++;
	else
		cont=0;
	if(cont>m)
		return; 

	if(rest[i])
		return;
	visits[i]=1;


	int size=list[i].size();

	bool faro=true;

	for(int j=0;j<size;j++){
		if(!visits[list[i][j]] && !rest[list[i][j]]){
			visits[list[i][j]]=1;
			verificate(list,visits,cont,m,rest,cats,list[i][j],res);
			visits[list[i][j]]=0;
			faro=false;
		}
	}

	if(faro){
		res++;
		rest[i]=1;
	}

}
int main(){

	int n,m;
	cin>>n>>m;
	bool cats[n+1];
	bool c;
	int x,y;

	vector<vector<int>> list(n+1); 

	for(int i=1;i<=n;i++)
		cin>>cats[i];

	for(int i=1;i<n;i++){
		cin>>x>>y;
		list[x].push_back(y);
		list[y].push_back(x);
	}

	int size=list[1].size();

	bool states[n+1]={0};
	bool rest[n+1]={0};
	
	states[1]=1;

	int cont=cats[1];
	int res=0;

	for(int i=0;i<size;i++){
		verificate(list,states,cont,m,rest,cats,list[1][i],res);
	}

	cout<<res<<endl;

	return 0;
}
