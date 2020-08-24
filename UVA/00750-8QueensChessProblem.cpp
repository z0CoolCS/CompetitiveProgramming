#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;

int cont;
void findcases(vector<int>&vec,bool *posx,bool *diagx,bool *diagy,int &y,int posy){

	if(y==posy){
		findcases(vec,posx,diagx,diagy,y,posy+1);
		return;
	}

	if(posy==9){
		cont++;
		printf("%2d      ",cont);
		for(int i=1;i<=8;i++){
			cout<<vec[i];
			if(i!=8)
				cout<<" ";
		}
		cout<<endl;
		return;
	}

	for(int i=1;i<9;i++){
		if(!posx[i] && !diagx[posy+i] && !diagy[7+i-posy]){
			vec[posy]=i;
			posx[i]=1;
			diagx[i+posy]=1;
			diagy[7+i-posy]=1;
			findcases(vec,posx,diagx,diagy,y,posy+1);
			posx[i]=0;
			diagx[i+posy]=0;
			diagy[7+i-posy]=0;
			vec.pop_back();
		}
	}
}
int main(){

	int t,x,y;
	cin>>t;
	while(t--){
		cout<<"SOLN       COLUMN"<<endl;
		cout<<" #      1 2 3 4 5 6 7 8\n\n";
		cont=0;
		vector<int> vec(9,0);
		bool posx[9]={0};
		bool diagx[17]={0};
		bool diagy[17]={0};
		cin>>x>>y;
		posx[x]=1;
		diagx[x+y]=1;
		diagy[7+x-y]=1;
		vec[y]=x;
		findcases(vec,posx,diagx,diagy,y,1);
		if(t)
			cout<<endl;
	}

	return 0;
}
