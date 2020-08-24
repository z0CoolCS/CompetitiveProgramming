#include<iostream>
#include<set>

using namespace std;

int maxi=0;
void calculatemax(set<int> &s, int arr[],set<int>::iterator &it,int cuenta){
	if(it==s.end()){
		if(cuenta>maxi)
			maxi=cuenta;
		return;
	}
	it++;
	calculatemax(s,arr,it,0);
	calculatemax(s,arr,it,0);
}
int main(){

	int n;
	cin>>n;
	int arr[n+1];
	int i,num;
	set<int> s;
	for(i=1;i<=n;i++)
		arr[i]=0;
	for(i=0;i<n;i++){
		cin>>num;
		s.insert(num);
		arr[num]++;
	}
	set<int>::iterator it=s.begin();
	calculatemax(s,arr,it,0);

	return 0;
}
