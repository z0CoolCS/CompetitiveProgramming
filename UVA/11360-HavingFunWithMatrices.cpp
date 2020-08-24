#include<iostream>
#include<vector>

using namespace std;
void print(vector<vector<int>> &matrix,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
		{
			cout<<matrix[i][j];
		}
		cout<<endl;
	}
}
void decrement(vector<vector<int>> &matrix,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
		{
			--matrix[i][j];
			if(matrix[i][j]<0)
				matrix[i][j]+=10;
		}
	}
}
void increment(vector<vector<int>> &matrix,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
		{
			++matrix[i][j];
			matrix[i][j]%=10;
		}
	}
}
void changecolumn(vector<vector<int>> &matrix,int a,int b,int n){
	int aux;
	for(int i=0;i<n;i++)
	{
		aux=matrix[i][a];
		matrix[i][a]=matrix[i][b];
		matrix[i][b]=aux;
	}
}
void changerow(vector<vector<int>> &matrix,int a,int b,int n){
	int aux;
	for(int i=0;i<n;i++)
	{
		aux=matrix[a][i];
		matrix[a][i]=matrix[b][i];
		matrix[b][i]=aux;
	}
}
void transpose(vector<vector<int>> &matrix,int cycles,int n)
{

	int aux;

	for(int l=0;l<cycles;l++){
		for(int i=1;i<n-2*l-1;i++){
			aux=matrix[i+l][l];
			matrix[i+l][l]=matrix[l][i+l];
			matrix[l][l+i]=aux;

			aux=matrix[n-l-1][i+l];
			matrix[n-l-1][i+l]=matrix[i+l][n-l-1];
			matrix[i+l][n-l-1]=aux;

		}
		aux=matrix[n-l-1][l];
		matrix[n-l-1][l]=matrix[l][n-l-1];
		matrix[l][n-l-1]=aux;
	}
}
int main(){

	int t;
	cin>>t;
	int n;
	int m;
	char num;
	string line;
	int ind=1;
	while(t--){
		cout<<"Case #"<<ind++<<endl;
		cin>>n;
		vector<vector<int>> matrix(n,vector<int> (n,0));

		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>num;
				matrix[i][j]=num-'0';
			}
			cin.ignore();
		}
			
		cin>>m;
		if(m!=0)
			cin.ignore();
		int cycles=n/2;
		int a,b;
		while(m--){
			cin>>line;
			if(line=="inc")
				increment(matrix,n);
			else if(line=="dec")
				decrement(matrix,n);
			else if(line=="transpose")
				transpose(matrix,cycles,n);
			else if(line=="row"){
				cin>>a>>b;
				changerow(matrix,a-1,b-1,n);
				if(m!=0)
					cin.ignore();
			}
			else{
				cin>>a>>b;
				changecolumn(matrix,a-1,b-1,n);
				if(m!=0)
					cin.ignore();

			}
		}
		print(matrix,n);
		cout<<endl;


		

	}

	return 0;
}
