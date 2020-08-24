#include<iostream>
#include<vector>
#include<string>
#include<stdio.h>

using namespace std;
bool verificate(vector<vector<string>> &matrix,vector<vector<string>> &matrixcp, int n){
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			if(matrix[i][j]!=matrixcp[i][j])
				return false;
		
	
	return true;
}
bool leftright(vector<vector<string>> &matrix,vector<vector<string>> matrixcp,int cycles, int n){
	string aux;
	for(int l=0;l<cycles;l++){
	int m=(n-l*2)/2;
	for(int i=0;i<m;i++){
		aux=matrix[l][i+l];
		matrix[l][i+l]=matrix[l][n-i-1-l];
		matrix[l][n-i-1-l]=aux;
		aux=matrix[n-l-1][i+l];
		matrix[n-l-1][i+l]=matrix[n-l-1][n-i-1-l];
		matrix[n-l-1][n-1-i-l]=aux;
	}
	for(int i=1+l;i<n-1-l;i++){
		aux=matrix[i][l];
		matrix[i][l]=matrix[i][n-l-1];
		matrix[i][n-l-1]=aux;
	}
	}
	return verificate(matrix,matrixcp,n);
}
bool upsidedown(vector<vector<string>> &matrix,vector<vector<string>> matrixcp,int cycles, int n){
	string aux;
	for(int l=0;l<cycles;l++){
	int m=(n-2*l)/2;
	for(int i=0;i<m;i++){
		aux=matrix[i+l][l];
		matrix[i+l][l]=matrix[n-i-1-l][l];
		matrix[n-i-1-l][l]=aux;
		aux=matrix[i+l][n-l-1];
		matrix[i+l][n-l-1]=matrix[n-i-1-l][n-l-1];
		matrix[n-i-1-l][n-l-1]=aux;
	}
	for(int i=1+l;i<n-1-l;i++){
		aux=matrix[l][i];
		matrix[l][i]=matrix[n-l-1][i];
		matrix[n-l-1][i]=aux;
	}
	}
	return leftright(matrix,matrixcp,cycles,n);
}
int main(){
	int t;
	cin>>t;
	int n;
	string aux;
	int ind=1;
	cin.ignore();
	while(t--){
		cout<<"Test #"<<ind++<<": ";
		scanf("N = %d",&n);
		vector<vector<string>> matrix(n,vector<string>(n,""));
		bool faro=true;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>aux;
				matrix[i][j]=aux;
				if(aux[0]=='-')
					faro=false;
			}
			cin.ignore();
		}
		int cycles=n/2;
		if(faro){
			if(upsidedown(matrix,matrix,cycles,n))
				cout<<"Symmetric";
			else
				cout<<"Non-symmetric";
		}
		else
			cout<<"Non-symmetric";
		

		cout<<".\n";
	}

	return 0;
}
