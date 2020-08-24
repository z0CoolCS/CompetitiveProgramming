#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>

using namespace std;
struct obj{
	int dim;
	vector<pair<int,int>> limits;
	vector <int> consts;
};

int main(){
	int n,r;
	cin>>n>>r;
	string name;
	int b,size,dim,l,u,ind;
	unordered_map<string,obj> dict;
	for(int i=0;i<n;i++){
		cin.ignore();
		cin>>name>>b>>size>>dim;
		vector<pair<int,int>> limits;
		for(int j=0;j<dim;j++){
			cin>>l>>u;
			limits.push_back(make_pair(l,u));
		}
		vector<int> consts(dim+1);
		consts[dim]=size;
		b-=size*limits[dim-1].first;
		for(int k=dim-1;k>0;k--){
			consts[k]=consts[k+1]*(1+limits[k].second-limits[k].first);
			b-=consts[k]*limits[k-1].first;
		}
		consts[0]=b;
		obj obj1{dim,limits,consts};
		dict[name]=obj1;
		
	}

	for(int i=0;i<r;i++){
		cin.ignore();
		cin>>name;
		cout<<name<<"[";
		int acum=dict[name].consts[0];

		for(int j=0;j<dict[name].dim;j++){
			cin>>ind;
			cout<<ind;
			if(j!=dict[name].dim-1)
				cout<<", ";
			else
				cout<<"] = ";
			acum+=ind*dict[name].consts[j+1];
		}
		cout<<acum<<endl;

	}

	return 0;
}
