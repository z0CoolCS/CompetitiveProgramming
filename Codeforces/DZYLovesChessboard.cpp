#include<iostream>
#include<queue>
#include<cstring>

using namespace std;

char matrix[100][100];
bool state[100][100];
void print(int &n,int &m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			cout<<matrix[i][j];
		cout<<endl;
	}
}
bool isValid(int posx,int posy,int n,int m){
	return posx>=0 && posx<n && posy>=0 && posy<m && !state[posx][posy]; 
}
int movx[]={0,1,0,-1};
int movy[]={1,0,-1,0};

void fillmatrix(int posx,int posy,queue<pair<int,int>> &q,int &n,int &m,bool type){

	for(int i=0;i<4;i++){
		if(isValid(posx+movx[i],posy+movy[i],n,m)){
			state[posx+movx[i]][posy+movy[i]]=1;
			if(matrix[posx+movx[i]][posy+movy[i]]=='.'){
				if(type)
					matrix[posx+movx[i]][posy+movy[i]]='B';
				else
					matrix[posx+movx[i]][posy+movy[i]]='W';
				fillmatrix(posx+movx[i],posy+movy[i],q,n,m,!type);
			}
			else if(matrix[posx+movx[i]][posy+movy[i]]=='-')
				q.push(make_pair(posx+movx[i],posy+movy[i]));
		}

	}

}
int main(){

	int n,m;
	cin>>n>>m;
	cin.ignore();
	char c;
	memset(matrix,'.',sizeof matrix);
	memset(state,0,sizeof state);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>c;
			if(c=='-')
				matrix[i][j]='-';
		}
		cin.ignore();
	}


	if(matrix[0][0]=='.')
		matrix[0][0]='B';
	bool type=false;
	state[0][0]=1;
	queue<pair<int,int>> q;
	q.push(make_pair(0,0));
	while(!q.empty()){
		auto t=q.front();
		q.pop();
		fillmatrix(t.first,t.second,q,n,m,type);
	}
	print(n,m);

	return 0;
}
