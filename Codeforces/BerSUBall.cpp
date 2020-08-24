#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int n,m;
	cin>>n;
	int ns[n];
	for(int i=0;i<n;i++)
		cin>>ns[i];
	cin>>m;
	int ms[m];
	for(int i=0;i<m;i++)
		cin>>ms[i];

	sort(ns,ns+n);
	sort(ms,ms+m);

	int cont=0;
	int j=0,lastj=0;
	for(int i=0;i<n;i++){
		j=lastj;
		for(;j<m;j++){
			if(abs(ms[j]-ns[i])<=1){
				cont++;
				lastj=j+1;
				break;
			}
		}
	}
	cout<<cont<<endl;

	return 0;
}
