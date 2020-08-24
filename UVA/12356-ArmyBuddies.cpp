#include<iostream>

using namespace std;

void setleftright(int *sleft,int *sright,int s){
	for(int i=1;i<=s;i++){
		sleft[i]=i-1;
		sright[i]=i+1;
	}
	sleft[1]=-1;
	sright[s]=-1;
}
int main(){
	int s,p;
	int l,r;
	while(cin>>s>>p,s || p){
		int soldiersleft[s+7];
		int soldiersright[s+7];
		setleftright(soldiersleft,soldiersright,s);
		for(int i=0;i<p;i++){
			cin>>l>>r;
			soldiersleft[soldiersright[r]]=soldiersleft[l];
			soldiersright[soldiersleft[l]]=soldiersright[r];
			if(soldiersleft[l]==-1)
				cout<<"*";
			else 
				cout<<soldiersleft[l];
			cout<<" ";
			if(soldiersright[r]==-1)
				cout<<"*";
			else
				cout<<soldiersright[r];

			cout<<endl;

		}
		cout<<"-\n";
		

	}

	return 0;
}
