#include<iostream>
#include<cmath>
#include<climits>

using namespace std;

int main(){

	int v,v0,p;
	double maxi,newv;
	while(cin>>v>>v0,v || v0){
		maxi=-1;

		if(v0>=v){
			cout<<0<<endl;
			continue;
		}
		for(int i=1;v*1.0/i>v0;i++){
			newv=i*0.3*sqrt(v*1.0/i-v0);
			if(fabs(newv-maxi)<1e-8){
				p=0;
				break;
			}
			else if(newv>maxi){
				p=i;
				maxi=newv;
			}
		}
		cout<<p<<endl;
	}

	return 0;
}
