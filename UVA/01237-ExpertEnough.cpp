#include<iostream>
#include<string>

using namespace std;

struct Maker{
	string name;
	int l;
	int h;
};
int main(){
 
	int t,d,q,price,ind;
	cin>>t;

	bool space=false;
	bool faro;
	while(t--){
		if(space)
			cout<<endl;
		cin>>d;
		Maker arr[d];
		for(int i=0;i<d;i++){
			Maker aux;
			cin>>aux.name>>aux.l>>aux.h;
			arr[i]=aux;
		}
		cin>>q;
		for(int i=0;i<q;i++){
			faro=false;
			cin>>price;
			for(int j=0;j<d;j++){
				if(arr[j].h>=price &&  arr[j].l<=price){
					if(!faro){
						faro=true;
						ind=j;
					}
					else{
						ind=-1;
						break;
					}
				}
			}
			if(!faro || ind==-1)
				cout<<"UNDETERMINED\n";
			else
				cout<<arr[ind].name<<endl;
		}
		space=true;
	}

	return 0;
}
