#include<iostream>
#include<string>

using namespace std;

int main(){
	string number;
	int sizen,sum;
	while(cin>>number,number!="0"){
		sizen=number.size();
		while(sizen>1){
			sum=0;
			for(char &c:number)
				sum+=c-'0';
			number=to_string(sum);
			sizen=number.size();
		}
		cout<<number<<endl;
	}
	

	return 0;
}
