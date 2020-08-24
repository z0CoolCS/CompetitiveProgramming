#include<iostream>
#include<vector>

using namespace std;

bool verificate(vector<vector<bool>> matrix,int n){
	bool faro=true;
	int sumh,sumv;
	int conth=0,contv=0;
	int posr,posc;
	for(int i=0;i<n;i++){
		sumh=0;
		sumv=0;
		for(int j=0;j<n;j++){
			sumh+=matrix[i][j];
			sumv+=matrix[j][i];
		}
		if(sumh%2){
			conth++;
			if(conth>1)
				return false;
			faro=false;
			posr=i;
		}
		if(sumv%2){
			contv++;
			if(contv>1)
				return false;
			faro=false;
			posc=i;
		}
		
	}

	if(faro)
		cout<<"OK\n";
	else
		cout<<"Change bit ("<<++posr<<","<<++posc<<")\n";
	return true;
	
}
int main(){

	int n;
	bool bit;
	while(cin>>n,n){
		vector<vector<bool>> matrix(n,vector<bool> (n,1));

		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>bit;
				matrix[i][j]=bit;
			}
			cin.ignore();
		}
		if(!verificate(matrix,n))
			cout<<"Corrupt\n";
		
	}

	return 0;
}
