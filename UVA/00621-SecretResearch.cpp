#include<iostream>

using namespace std;

int main(){
	string digits;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>digits;
		int sized=digits.size();
		if(digits=="1" || digits=="4" || digits=="78")
			cout<<"+\n";
		else if(digits[0]=='9' && digits[sized-1]=='4')
			cout<<"*\n";
		else if(digits[sized-1]=='5' && digits[sized-2]=='3')
			cout<<"-\n";
		else
			cout<<"?\n";
			
	}

	return 0;
}
