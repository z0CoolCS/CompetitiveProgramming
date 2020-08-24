//include<bits/stdc++.h>
#include<iostream>
#include<cstring>

using namespace std;
bool matrix[20][20];
bool path[20][20];
bool valid(int posx,int posy,int n){
	return (posx>=0 && posx<n) && (posy>=0 && posy<n) && !matrix[posx][posy] && !path[posx][posy];
}
void countpaths(int posx,int posy,int &count,int n){
	int movx[]={0,1,0,-1};
	int movy[]={1,0,-1,0};

	if(posx==n-1 && posy==n-1){
		count++;
		return;
	}
	for(int i=0;i<4;i++){
		if(valid(posx+movx[i],posy+movy[i],n)){
			path[posx+movx[i]][posy+movy[i]]=1;
			countpaths(posx+movx[i],posy+movy[i],count,n);
			path[posx+movx[i]][posy+movy[i]]=0;
		}
	}
}
int main(){

	int t,n;
	cin>>t;

	while(t--){
		memset(matrix,false, sizeof matrix);
		memset(path,false, sizeof path);
		cin>>n;
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				cin>>matrix[i][j];

		int cont=0;
		path[0][0]=1;
		countpaths(0,0,cont,n);
		cout<<cont<<endl;
	}

	return 0;
}
