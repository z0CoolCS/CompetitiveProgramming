#include<iostream>
#include<cstring>

using namespace std;

char matrix[500][500];

int count(int posx,int posy,int n,int m){
	int cont=0;
	if(posx>0)
		if(matrix[posx-1][posy]=='.')
			cont++;
	if(posx<n-1)
		if(matrix[posx+1][posy]=='.')
			cont++;
	if(posy>0)
		if(matrix[posx][posy-1]=='.')
			cont++;
	if(posy<m-1)
		if(matrix[posx][posy+1]=='.')
			cont++;
	return cont;
}
bool remove(int posx,int posy,int n,int m){

	if(posx>0)
		if(matrix[posx-1][posy]=='.')
			if(count(posx-1,posy,n,m)<3)
				return false;
	
	if(posx<n-1)
		if(matrix[posx+1][posy]=='.')
			if(count(posx+1,posy,n,m)==1)
				return false;
	if(posy>0)
		if(matrix[posx][posy-1]=='.')
			if(count(posx,posy-1,n,m)==1)
				return false;
	if(posy<m-1)
		if(matrix[posx][posy+1]=='.')
			if(count(posx,posy+1,n,m)==1)
				return false;
	return true;
}
int main(){

	int n,m,k;

	cin>>n>>m>>k;
	cin.ignore();

	char c;
	memset(matrix,'.',sizeof matrix);

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>c;
			if(c=='#')
				matrix[i][j]='#';
		}
		cin.ignore();
	}

	bool faro=false;
	bool track;
	int posx, posy;
	while(!faro && k!=0){
		track=true;
		for(int i=0;i<n && !faro;i++){
			for(int j=0;j<m && !faro;j++){
				if(matrix[i][j]=='.'){
					if(remove(i,j,n,m)){
						track=false;
						matrix[i][j]='X';
						k--;
						if(k==0)
							faro=true;
					}
					posx=i,posy=j;
				}
			}
		}
	}


	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			cout<<matrix[i][j];
		cout<<endl;
	}


	return 0;
}
