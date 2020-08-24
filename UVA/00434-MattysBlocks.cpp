#include<iostream>

using namespace std;

int main(){

	int t,k;
	cin>>t;
	while(t--){
		cin>>k;
		int front[k];
		int right[k];
		int n=0; 
		int m=0;
		for(int i=0;i<k;i++){
			cin>>front[i];
			n+=front[i];
		}
		for(int i=0;i<k;i++)
			cin>>right[i];
		

		for(int i=0;i<k;i++){
			if(front[i]==0)
				continue;
			for(int j=0;j<k;j++){
				if(front[i]<right[j])
					m+=front[i];
				else
					m+=right[j];
			}

		}
		for(int i=0;i<k;i++){
			for(int j=0;j<k;j++){
				if(front[j]==right[i]){
					front[j]=right[i]=0;
					break;
				}
			}
			n+=right[i];

		}
		cout<<"Matty needs at least "<<n<<" blocks, and can add at most "<<(m-n)<<" extra blocks.\n";
		

	}

	return 0;
}
