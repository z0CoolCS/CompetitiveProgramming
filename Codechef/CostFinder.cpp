#include<iostream>
#include<sstream>
#include<vector>

using namespace std;

int main(){

	string line;
	int n;
	int a,b;
	int num;

	cin>>n;
	cin.ignore();
	while(n--){

		getline(cin,line);
		stringstream s(line);

		vector<int> v;
		while(s>>num)
			v.push_back(num);
		
	}
	
	
	

	return 0;
}
