#include<iostream>
#include<cstring>

using namespace std;

bool matrix[10][10];
int movx[]={2,1,-2,-1,2,1,-2,-1};
int movy[]={1,2,-1,-2,-1,-2,1,2};
bool valid(int posx,int posy){
	return posx>=0 && posx<10 && posy>=0 && posy<10 && matrix[posx][posy];
}
void jumps(int posx,int posy,int &mini,int cont){

	for(int i=0;i<8;i++){
		if(valid(posx+movx[i],posy+movy[i])){
			matrix[posx+movx[i]][posy+movy[i]]=0;
			jumps(posx+movx[i],posy+movy[i],mini,cont-1);
			matrix[posx+movx[i]][posy+movy[i]]=1;
		}
	}
	if(mini>cont)
		mini=cont;
}
int main(){

	int n;
	int a,b;
	int ind=0;
	while(cin>>n,n){
		memset(matrix,0,sizeof matrix);
		int cont=0;
		int mini=101;
		for(int i=0;i<n;i++){
			cin>>a>>b;
			cont+=b;
			for(int j=0;j<b;j++)
				matrix[i][a+j]=1;
		}
		matrix[0][0]=0;
		jumps(0,0,mini,cont-1);

		cout<<"Case "<<++ind<<", "<<mini;
		if(mini==1)
			cout<<" square can not be reached.\n";
		else
			cout<<" squares can not be reached.\n";

	}


	return 0;
}
