#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){

	int n;
	cin>>n;
	cin.ignore();
	string name;
	vector<string> names;
	string song[16]={"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};



	for(int i=0;i<n;i++){
		cin>>name;
		names.push_back(name);
	}
	int j=0,k=0;
	int songsize=n/16+1;
	songsize*=16;
	while(songsize--){
		cout<<names[j]<<": "<<song[k]<<endl;
		j++;k++;
		if(j==n)
			j=0;
		if(k==16)
			k=0;
	}

	return 0;
}


