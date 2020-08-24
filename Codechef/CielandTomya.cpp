#include<iostream>
#include<cstring>
#include<vector>

using namespace std;

void findshortestpath(vector<pair<int,int>> *v,int node,int parent,int cost,int &mini,int &ways,int &fin,vector<bool> &path){

	if(node==fin){
		if(cost<mini){
			mini=cost;
			ways=1;
		}
		else if(cost==mini)
			ways++;
		return;
	}
	int size=v[node].size();
	for(int i=0;i<size;i++){
		if(v[node][i].first!=parent && !path[v[node][i].first]){
			path[v[node][i].first]=1;
			findshortestpath(v,v[node][i].first,node,cost+v[node][i].second,mini,ways,fin,path);
			path[v[node][i].first]=0;
		}
	}
}
int main(){

	int t,n,m;
	int a,b,c;
	cin>>t;
	while(t--){
		cin>>n>>m;
		vector<pair<int,int>> nodes[n+1];
		vector<bool> path(11,0);
		for(int i=0;i<m;i++){
			cin>>a>>b>>c;
			nodes[a].push_back(make_pair(b,c));
			nodes[b].push_back(make_pair(a,c));
		}
		int mini=500,ways=0;
		path[1]=1;
		findshortestpath(nodes,1,-1,0,mini,ways,n,path);
		cout<<ways<<endl;
	}

	return 0;
}
