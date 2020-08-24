#include<iostream>
#include<vector>

using namespace std;

int main(){
	int m;
	cin>>m;
	bool faro=false;
	while(m--){
		if(faro)
			cout<<endl;
		int n,k,fcoin,num,num1auxl=-1,num2auxl=-1,num1auxr=-1,num2auxr=-1;
		char signal;
		cin>>n>>k;
		bool arr[n+1];
		for(int i=1;i<=n;i++) arr[i]=true;

		int cont=2,ind=1,pos;

		for(int i=0;i<k;i++){
			cin>>fcoin;
			vector<int> set1;
			vector<int> set2;
			for(int j=0;j<fcoin;j++)
			{
				cin>>num;
				set1.push_back(num);
			}
			for(int j=0;j<fcoin;j++)
			{
				cin>>num;
				set2.push_back(num);
			}
			cin.ignore();
			cin>>signal;
			if(signal=='>'){
				if(set1.size()==1 && set2.size()==1){
					if(num1auxl==-1){
						num1auxl==set1[0];
						num2auxl==set2[0];
					}	
					else{
						if(num1auxl==set1[0]){
							arr[set2[0]]=false;
							arr[num2auxl]=false;
						}
						else if(num2auxl==set2[0])
						{
							arr[set1[0]]=false;
							arr[num1auxl]=false;
						}
					}


				}
			}
			else if(signal=='<'){
				if(set1.size()==1 && set2.size()==1){
					if(num1auxr==-1){
						num1auxr==set1[0];
						num2auxr==set2[0];
					}	
					else{
						if(num1auxr==set1[0]){
							arr[set2[0]]=false;
							arr[num2auxr]=false;
						}
						else if(num2auxr==set2[0])
						{
							arr[set1[0]]=false;
							arr[num1auxr]=false;
						}
					}
				}
			}
			else{
				
				for(int j=0;j<fcoin;j++)
				{
					arr[set1[j]]=false;
					arr[set2[j]]=false;
				}
			}

			

		}
			while(cont>0 && ind<=n){
				if(arr[ind++]){
					cont--;
					pos=ind;
				}
			}	
			if(cont==0)
				cout<<0<<endl;
			else
				cout<<--pos<<endl;
			faro=true;
		
	}

	return 0;
}
