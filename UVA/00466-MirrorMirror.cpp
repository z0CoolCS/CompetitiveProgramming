#include<iostream>
#include<vector>

using namespace std;

bool identical(vector<vector<char>> &o,vector<vector<char>> &t,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(o[i][j]!=t[i][j])
				return false;
		}
	}
	return true;
}
void rotate90(vector<vector<char>> &o,vector<vector<char>> cp,int n){
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			o[i][j]=cp[n-j-1][i];
		

}
bool reflection(vector<vector<char>> o,vector<vector<char>> t,int n,bool state){
	vector<vector<char>> cporig(n,vector<char> (n,'1'));
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cporig[i][j]=o[n-i-1][j];
	
	if(state)
		return identical(cporig,t,n);
	
	else{
		rotate90(cporig,cporig,n);
		if(identical(cporig,t,n)){
			cout<<"reflected vertically and rotated 90 degrees";
			return true;
		}
		rotate90(cporig,cporig,n);
		if(identical(cporig,t,n)){
			cout<<"reflected vertically and rotated 180 degrees";
			return true;
		}
		rotate90(cporig,cporig,n);
		if(identical(cporig,t,n)){
			cout<<"reflected vertically and rotated 270 degrees";
			return true;
		}
		return false;
	}

	
}

bool proof(vector<vector<char>> o1,vector<vector<char>> o2, vector<vector<char>> t,int n){

	rotate90(o1,o1,n);
	if(identical(o1,t,n)){
		cout<<"rotated 90 degrees";
		return true;
	}
	
	rotate90(o1,o1,n);
	if(identical(o1,t,n)){
		cout<<"rotated 180 degrees";
		return true;
	}
	rotate90(o1,o1,n);
	if(identical(o1,t,n)){
		cout<<"rotated 270 degrees";
		return true;
	}
	if(reflection(o2,t,n,true))
	{
		cout<<"reflected vertically";
		return true;
	}
	if(reflection(o2,t,n,false))
		return true;
		
	return false;
}
int main(){

	int n,ind=0;
	char c;
	string line;
	while(cin>>n){
		cin.ignore();
		cout<<"Pattern "<<++ind<<" was ";
		vector<vector<char>> original(n,vector<char> (n,'1'));
		vector<vector<char>> transformed(n,vector<char> (n,'1'));
		for(int i=0;i<n;i++){
			getline(cin,line);
			for(int j=0;j<n;j++){
				original[i][j]=line[j];
				transformed[i][j]=line[j+n+1];
			}
		}
		if(identical(original,transformed,n))
			cout<<"preserved";
		else{
			if(!proof(original,original,transformed,n))
				cout<<"improperly transformed";
		}


		cout<<".\n";

	}


	return 0;
}

