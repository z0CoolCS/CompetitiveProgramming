#include<iostream>
#include<cstring>

using namespace std;
void print(string line){
	int i,j;
	int matrix[5][5]={0};
	for(char &c:line){

		if(c=='a'){i=1;j=1;}
		else if(c=='b'){i=1;j=2;}
		else if(c=='c'){i=1;j=3;}
		else if(c=='d'){i=2;j=1;}
		else if(c=='e'){i=2;j=2;}
		else if(c=='f'){i=2;j=3;}
		else if(c=='g'){i=3;j=1;}
		else if(c=='h'){i=3;j=2;}
		else {i=3;j=3;}

		matrix[i-1][j]++;
		matrix[i+1][j]++;
		matrix[i][j-1]++;
		matrix[i][j+1]++;
		matrix[i][j]++;

	}
	for(int s=1;s<4;s++){
		for(int k=1;k<4;k++){
			cout<<matrix[s][k]%10;
			if(k<3)
				cout<<" ";
		}
		cout<<endl;
	}
}

int main(){

	string line;

	int ind=1;

	while(getline(cin,line)){
		
		cout<<"Case #"<<ind++<<":\n";
		print(line);

	}

	return 0;
}
