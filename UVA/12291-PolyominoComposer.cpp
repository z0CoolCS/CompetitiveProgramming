#include<vector>
#include<iostream>

using namespace std;

bool verificate(vector<vector<bool>> bp,vector<vector<bool>> sp,int x,int y,int n,int cpcountbit,int frow,int fcol,int lrow,int lcol){
	int difr=lrow-frow;
	int difc=lcol-fcol;
	for(int i=x,k=frow;i<difr+x;i++,k++){
		for(int j=y,l=fcol;j<difc+y;j++,l++){
			if(!bp[i][j] && sp[k][l])
				return false;
			else if(
		}
	}

	return true;
}
bool search(vector<vector<bool>> bp,vector<vector<bool>> sp,int n,int frow,,int fcol,int lrow,int lcol,int cbitsbp){
	int cpcountbit=cbitsbp;
	int difr=lrow-frow;
	int difc=lcol-fcol;
	for(int i=0;i<n-difr;i++){
		for(int j=0;j<n-difc;j++){
			if(bp[i][j]){
				cpcountbit=cbitsbp;
				if (verificate(bigp,smallp,i,j,n,cpcountbit,frow,fcol,lrow,lcol))
					if(!cpcbitsbp)
						return true;
			}
		}
	}
	return false;
}

int firstrow(vector<vector<bool>> p,int x){
	for(int i=0;i<x;i++)
		for(int j=0;j<x;j++)
			if(p[i][j])
				return i;
}
int firstcolumn(vector<vector<bool>> p,int x){

	for(int i=0;i<x;i++)
		for(int j=0;j<x;j++)
			if(p[j][i])
				return j;
}
int lastrow(vector<vector<bool>> p,int x){
	for(int i=x-1;i>=0;i--)
		for(int j=0;j<x;j++)
			if(p[i][j])
				return i;
}
int lastcolumn(vector<vector<bool>> p,int x){
	for(int i=x-1;i>=0;i--)
		for(int j=0;j<x;j++)
			if(p[j][i])
				return j;
}

int main(){
	int n,m;

	char b;
	while(cin>>n>>m,n||m){
		vector<vector<bool>> bigp(n,vector<bool>(n,0));
		int cbitsbp=0;
		vector<vector<bool>> smallp(m,vector<bool>(m,0));
		int cbitssp=0;

		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>b;
				if(n=='.')
					bigp[i][j]=0;
				else{
					bigp[i][j]=1;
					cbitsbp++;
				}
			}
			cin.ignore();
		}
		for(int i=0;i<m;i++){
			for(int j=0;j<m;j++){
				cin>>b;
				if(n=='.')
					smallp[i][j]=0;
				else{
					smallp[i][j]=1;
					cbitssp++;
				}
			}
			cin.ignore();
		}
		
		int frow=firstrow(smallp,m);
		int lrow=lastrow(smallp,m);
		int fcol=firstcolumn(smallp,m);
		int lcol=lastcolumn(smallp,m);

		int cont=0;
		if(search(bigp,smallp,n,frow,fcol,lrow,lcol,cbitsbp))
			cout<<1<<endl;
		else
			cout<<0<<endl;

		

	}


	return 0;
}
