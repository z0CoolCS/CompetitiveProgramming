#include<iostream>
#include<limits.h>

using namespace std;

int main(){
	int k;
	cin>>k;
	int tmp,res=0;
	string num;

	for(int i=19;i<INT_MAX;i++){
		tmp=0;
		num=to_string(i);
		for(char c:num){
			tmp+=c-'0';
		}
		if(tmp==10){
			k--;
			if(k==0){
				res=i;
				break;
			}
		}

	}
	cout<<res<<endl;

	return 0;
}
