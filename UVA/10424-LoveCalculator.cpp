#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main(){
	string name1,name2;
	int sum1,sum2;
	while(getline(cin,name1)){
		getline(cin,name2);
		sum1=0;sum2=0;
		for(char &c:name1)
			if((c>='a' && c<='z') || (c>='A' && c<='Z')){
				if(c>='a' && c<='z')	
					sum1+=c-'a'+1;
				else
					sum1+=c-'A'+1;
			}
		while(sum1>9){
			name1=to_string(sum1);
			sum1=0;
			for(char &c:name1)
				sum1+=c-'0';

		}
	
		for(char &c:name2)
			if((c>='a' && c<='z') || (c>='A' && c<='Z')){
				if(c>='a' && c<='z')	
					sum2+=c-'a'+1;
				else
					sum2+=c-'A'+1;
			}
		while(sum2>9){
			name2=to_string(sum2);
			sum2=0;
			for(char &c:name2)
				sum2+=c-'0';

		}
		if(sum1<sum2)
			cout<<setprecision(2)<<fixed<<(sum1*100.0)/sum2<<" %\n";
		else
			cout<<setprecision(2)<<fixed<<(sum2*100.0)/sum1<<" %\n";
	

	}

	return 0;
}
