#include<iostream>
#include<vector>

using namespace std;
bool verificate(vector<vector<bool>> &matrix){
	for(int i=1;i<4;i++)
		for(int j=1;j<4;j++)
			if(matrix[i][j])
				return false;
	return true;
}
void update(vector<vector<bool>> &matrix,vector<vector<bool>> matrixcp){
	for(int i=1;i<4;i++)
		for(int j=1;j<4;j++)
			matrix[i][j]=(matrixcp[i-1][j]+matrixcp[i][j-1]+matrixcp[i+1][j]+matrixcp[i][j+1])%2;
	
}
int main(){
	int t;
	string line;
	cin>>t;
	cin.ignore();
	char bit;
	while(t--){
		getline(cin,line);
		vector<vector<bool>> matrix(5,vector<bool> (5,0));
		vector<vector<bool>> matrixcp(5,vector<bool> (5,0));


		for(int i=1;i<4;i++){
			for(int j=1;j<4;j++){
				cin>>bit;
				matrix[i][j]=bit-'0';
				matrixcp[i][j]=bit-'0';
			}
			cin.ignore();
		}

		int cont=-1;
		while(!verificate(matrix)){
			update(matrix,matrix);
			cont++;
		}
		cout<<cont<<endl;

	}
	return 0;
}
