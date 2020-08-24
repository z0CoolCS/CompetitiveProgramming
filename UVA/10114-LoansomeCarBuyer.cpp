#include<iostream>

using namespace std;

int main(){

	int m,mi,months;
	double downpayment,loan,valuecar, ndep,dep;
	while(cin>>m>>downpayment>>loan>>ndep,m>=0){
		float deps[m+1];
		months=0;
		valuecar=loan+downpayment;
		for(int i=0;i<=m;i++) deps[i]=0;
		while(ndep--){
			cin>>mi>>dep;
			deps[mi]=dep;
		}
		valuecar-=valuecar*deps[0];
		dep=deps[0];
		double monthlypayment=loan/m;
		while(loan>=valuecar){
			months++;
			if(deps[months]!=0)
				dep=deps[months];

			loan-=monthlypayment;
			valuecar-=valuecar*dep;
		}
		
		if(months!=1)
			cout<<months<<" months\n";
		else
			cout<<months<<" month\n";
		
	}

	return 0;
}
