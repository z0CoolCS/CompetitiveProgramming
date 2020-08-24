#include<iostream>
#include<cstring>

using namespace std;

bool matrix[100][100];
int movx[]={0,1,0,-1};
int movy[]={1,0,-1,0};

bool valid(int posx,int posy,int n){
	return posx>=0 && posx<n && posy>=0 && posy<n && !matrix[posx][posy];
}
void countpaths(int posx,int posy,int &count,int n){

	if(posx==n-1 && posy==n-1){
		count++;
		return;
	}
	for(int i=0;i<4;i++){
		if(valid(posx+movx[i],posy+movy[i],n)){
			matrix[posx+movx[i]][posy+movy[i]]=1;
			countpaths(posx+movx[i],posy+movy[i],count,n);
			matrix[posx+movx[i]][posy+movy[i]]=0;
		}
	}
}
int main(){

	int n;
	cin>>n;
	memset(matrix,1,sizeof matrix);
	int cont=0;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>matrix[i][j];
	
	matrix[0][0]=1;
	countpaths(0,0,cont,n);

	cout<<cont<<endl;

	return 0;
}
