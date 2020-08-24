#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

char matrix[40][40];
int movx[]={1,0,-1,0};
int movy[]={0,1,0,-1};

bool valid(int posx,int posy,int n,int m){
	return posx>=0 and posx<n && posy>=0 && posy<m && matrix[posx][posy]!='#';
}
void findtreasure(int posx,int posy,int &n,int &m,int life,int &cont,bool &faro){

	for(int i=0;i<4 && !faro;i++){
		if(valid(posx+movx[i],posy+movy[i],n,m))
		       if(matrix[posx+movx[i]][posy+movy[i]]=='x'){
			cont=life;
			faro=true;
			return;
			}
	}
	for(int i=0;i<4 && !faro;i++){
		if(valid(posx+movx[i],posy+movy[i],n,m))
			if(matrix[posx+movx[i]][posy+movy[i]]=='.'){
				matrix[posx+movx[i]][posy+movy[i]]='#';
				findtreasure(posx+movx[i],posy+movy[i],n,m,life,cont,faro);
				matrix[posx+movx[i]][posy+movy[i]]='.';
			}
	}
	for(int i=0;i<4 && !faro;i++){
		if(valid(posx+movx[i],posy+movy[i],n,m))
			if(matrix[posx+movx[i]][posy+movy[i]]=='s'){
				matrix[posx+movx[i]][posy+movy[i]]='#';
				findtreasure(posx+movx[i],posy+movy[i],n,m,life+1,cont,faro);
				matrix[posx+movx[i]][posy+movy[i]]='s';
			}
	}

}
int main(){

	int n,m,j;
	cin>>n>>m>>j;
	cin.ignore();
	vector<pair<int,int>> v;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>matrix[i][j];
			if(matrix[i][j]=='@')
				v.push_back(make_pair(i,j));
		}
		cin.ignore();
	}
	bool faro,ans=false;;
	int cont;
	for(auto &x:v){
		cont=0;
		faro=false;
		findtreasure(x.first,x.second,n,m,0,cont,faro);
		if(faro & cont*2<=j){
			ans=true;
			break;
		}
	}
	if(ans)
		cout<<"SUCCESS\n";
	else
		cout<<"IMPOSSIBLE\n";

	return 0;
}
