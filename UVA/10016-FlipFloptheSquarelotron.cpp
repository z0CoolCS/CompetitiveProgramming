#include<iostream>
#include<vector>
#include<string>

using namespace std;
void upsidedown(vector<vector<string>> &matrix,int l, int n){
	int m=(n-2*l)/2;
	string aux;
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
void leftright(vector<vector<string>> &matrix,int l, int n){
	int m=(n-l*2)/2;
	string aux;
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
void flipinversediagonal(vector<vector<string>> &matrix,int l, int n){
	string aux;
	for(int i=1;i<n-2*l-1;i++){
		aux=matrix[l][i+l];
		matrix[l][i+l]=matrix[n-i-l-1][n-l-1];
		matrix[n-l-i-1][n-l-1]=aux;

		aux=matrix[i+l][l];
		matrix[i+l][l]=matrix[n-l-1][n-l-i-1];
		matrix[n-l-1][n-l-1-i]=aux;
		
	}
	aux=matrix[l][l];
	matrix[l][l]=matrix[n-1-l][n-1-l];
	matrix[n-1-l][n-1-l]=aux;
}
void flipmaindiagonal(vector<vector<string>> &matrix,int l, int n){
	string aux;
	for(int i=1;i<n-2*l-1;i++){
		aux=matrix[i+l][l];
		matrix[i+l][l]=matrix[l][i+l];
		matrix[l][i+l]=aux;

		aux=matrix[n-l-1][i+l];
		matrix[n-l-1][i+l]=matrix[i+l][n-l-1];
		matrix[i+l][n-l-1]=aux;
	}
	aux=matrix[n-l-1][l];
	matrix[n-l-1][l]=matrix[l][n-l-1];
	matrix[l][n-l-1]=aux;
}

void print(vector<vector<string>> &matrix, int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<matrix[i][j];
			if(j!=n-1)
				cout<<" ";
		}
		cout<<endl;
	}
}
int main(){
	int t;
	cin>>t;
	int n;
	string aux;
	int ops,op;
	while(t--){
		cin>>n;
		cin.ignore();
		vector<vector<string>> matrix(n,vector<string>(n,""));
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>aux;
				matrix[i][j]=aux;
			}
			cin.ignore();
		}
		int cycles=n%2?(n/2+1):n/2;
		for(int i=0;i<cycles;i++){
			cin>>ops;
			while(ops--){
				cin>>op;
				if(op==1)
					upsidedown(matrix,i,n);
				else if(op==2)
					leftright(matrix,i,n);
				else if(op==3)
					flipmaindiagonal(matrix,i,n);
				else
					flipinversediagonal(matrix,i,n);

			}
		}
		print(matrix,n);
	}


	return 0;
}
