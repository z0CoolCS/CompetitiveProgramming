#include<iostream>

using namespace std;

int main(){
	
	int t;
	cin>>t;
	int matrix[10][10]={0};
	while(t--){
		for(int i=1;i<=9;i+=2)
			for(int j=1;j<=i;j+=2)
				cin>>matrix[i][j];
			
		for(int i=2;i<=8;i+=2){
			for(int j=1;j<=i;j+=2){
				matrix[i+1][j+1]=(matrix[i-1][j]-(matrix[i+1][j]+matrix[i+1][j+2]))/2;
				matrix[i][j]=matrix[i+1][j]+matrix[i+1][j+1];
				matrix[i][j+1]=matrix[i+1][j+2]+matrix[i+1][j+1];
			}
		}
		for(int i=1;i<=9;i++){
			for(int j=1;j<=i;j++){
				cout<<matrix[i][j];
				if(j!=i)
					cout<<" ";
			}
			cout<<endl;
		}
		

	}

	return 0;
}
