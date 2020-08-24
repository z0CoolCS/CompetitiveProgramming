#include<iostream>
#include<vector>

using namespace std;

int main(){

	int r,p;
	int aux;
	int scores;
	int k;
	while(cin>>r>>p,r || p){

		vector<vector<int>> matrixpos(r,vector<int> (p,0));
		for(int i=0;i<r;i++){
			for(int j=0;j<p;j++){
				cin>>aux;
				matrixpos[i][aux-1]=j;
			}
		}
		cin>>scores;
		
		for(int i=0;i<scores;i++){
			cin>>k;
			vector<int> scoresvec;
			vector<int> lastscores(p,0);
			for(int j=0;j<k;j++){
				cin>>aux;
				scoresvec.push_back(aux);
			}
			for(int m=0;m<r;m++)
				for(int j=0;j<k;j++)
					lastscores[matrixpos[m][j]]+=scoresvec[j];
				
			int max=0;
			for(int j=0;j<p;j++){
				if(lastscores[j]>max)
					max=lastscores[j];
			}
			bool faro=false;
			for(int j=0;j<p;j++){
				if(lastscores[j]==max){
					if(faro)
						cout<<" ";
					cout<<j+1;
					faro=true;
				}
			}
			cout<<endl;
			
		}


	}
	return 0;
}

