#include<iostream>
#include<vector>
#include<stdio.h>

using namespace std;

int main(){


	int n;
	int num,den;
	int cont;
	while(cin>>n){
		cont=0;
		vector<pair<int,int>> vec;
		for(int i=n+1;i<=2*n;i++){
			num=n*i;
			den=i-n;
			if(num%den==0){
				cont++;
				vec.push_back(make_pair(i,num/den));
					
			}
		}
		cout<<cont<<endl;
		for(auto x:vec)
			printf("1/%d = 1/%d + 1/%d\n",n,x.second,x.first);
	}

	return 0;
}
