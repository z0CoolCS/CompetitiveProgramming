#include<iostream>

using namespace std;

int findmini(int n,int m){
	int count=0;

	while(n!=m){
		if(m>n)
		{
			if(m & 1)
				m++;
			else
				m/=2;
		}
		else
			m++;
		count++;
	}
	return count;
}
int main(){

	int n,m;
	cin>>n>>m;
	int mini=n*m;
	cout<<findmini(n,m)<<endl;

	return 0;
}
