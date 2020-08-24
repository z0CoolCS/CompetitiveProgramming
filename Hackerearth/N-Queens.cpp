#include<iostream>
#include<cstring>

using namespace std;

bool cols[10];
bool diagp[19];
bool diags[19];
bool matrix[10][10];
bool farop=false;
void print(int n){
	bool faro;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			cout<<matrix[i][j]<<" ";
		cout<<endl;
	}
}
bool valid(int posx,int posy,int n){
	return !cols[posy] && !diagp[posx+posy] && !diags[n-posx+posy];
}
void fillmatrix(int row,int n){
	if(row==n){
		print(n);
		farop=true;
		return;
	}
	for(int i=0;i<n;i++){
		if(valid(row,i,n)){
			cols[i]=1;
			diagp[row+i]=1;
			diags[n-row+i]=1;
			matrix[row][i]=1;
			fillmatrix(row+1,n);
			if(farop)
				return;
			matrix[row][i]=0;
			diagp[row+i]=0;
			diags[n-row+i]=0;
			cols[i]=0;
		}
	}
}
int main(){


	int n;
	cin>>n;
	memset(cols,0,sizeof cols);
	memset(diagp,0,sizeof diagp);
	memset(diags,0,sizeof diags);
	memset(matrix,0,sizeof matrix);
	fillmatrix(0,n);
	if(!farop)
		cout<<"Not possible\n";

	return 0;
}
