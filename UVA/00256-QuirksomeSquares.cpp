#include<iostream>
#include<stdio.h>
#include<vector>
#include<unordered_map>
#include<cmath>

using namespace std;

int upper=1<<31-1;
vector<int> arr2;
vector<int> arr4;
vector<int> arr6;
vector<int> arr8;
void fillQuirkNumbers(){
	for(int i=0;i<100000000;i++){
		if(i<100 && pow((i%10+i/10),2)==i)
			arr2.push_back(i);
		if(i<10000 && pow((i%100+i/100),2)==i)
			arr4.push_back(i);
		if(i<1000000 && pow((i%1000+i/1000),2)==i)
			arr6.push_back(i);
		if(pow((i%10000+i/10000),2)==i)
			arr8.push_back(i);
	}
}
int main(){

	int q;

	fillQuirkNumbers();
	while(cin>>q){
		if(q==2){
			for(auto x:arr2)
				printf("%02d\n",x);
		}
		if(q==4){
			for(auto x:arr4)
				printf("%04d\n",x);
		}
		if(q==6){
			for(auto x:arr6)
				printf("%06d\n",x);
		}
		if(q==8){
			for(auto x:arr8)
				printf("%08d\n",x);
		}
	}

	return 0;
}
