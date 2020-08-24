#include<iostream>

using namespace std;

long long int m,n,k;

long long int lowercount(long long int mid){

	long long int c=mid-1>n?n:mid-1;
	for(int i=2;i<=m;i++){
		if(mid/i>n)	
			c+=n;
		else{
			if(mid%i==0)
				c--;
			c+=mid/i;
		}
	}
	return c;
}

int main(){

	cin>>m>>n>>k;

	long long int l=1,u=m*n;

	long long int med;
	long long int count;
	while(l<u){
		med=l+(u-l+1)/2;
		count=lowercount(med);
		if(count>=k)
			u=med-1;
		else
			l=med;

	}
	cout<<u<<endl;

	return 0;
}
