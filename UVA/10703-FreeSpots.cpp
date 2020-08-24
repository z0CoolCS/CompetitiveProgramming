#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	int w,h,n;
	int x1,x2,y1,y2;
	int aux1,aux2;
	while(cin>>w>>h>>n,w || h || n){
		vector<vector<bool>> matrix(w+1,vector<bool>(h+1,1));
		int cont=w*h;
		while(n--){
			cin>>x1>>y1>>x2>>y2;
			if(x1>x2)
				swap(x1,x2);
			if(y1>y2)
				swap(y1,y2);

			for(int i=x1;i<=x2;i++)
				for(int j=y1;j<=y2;j++){
					if(matrix[i][j]){
						matrix[i][j]=0;
						cont--;
					}
				}
			
		}
		if(cont==0)
			cout<<"There is no empty spots.\n";
		else if(cont==1)
			cout<<"There is one empty spot.\n";
		else
			cout<<"There are "<<cont<<" empty spots.\n";
	}

	return 0;
}
