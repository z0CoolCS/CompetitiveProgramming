#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

bool verificate(int arr[8][8],int rows[8],int cols[8],int nums[2][2][9],int ind,int size,vector<pair<int,int>> &s){

	if(size==ind)
		return true;
	bool faro;
	int posx=s[ind].first;
	int posy=s[ind].second;
	for(int i=1;i<=8;i++){
		if(rows[posx] & 1<<(i-1)) continue;
		if(cols[posy] & 1<<(i-1)) continue;
		if(nums[posx/4][posy/4][i]>1) continue;
		
		rows[posx]|=1<<(i-1);
		cols[posy]|=1<<(i-1);
		nums[posx/4][posy/4][i]++;
		arr[posx][posy]=i;
		faro=verificate(arr,rows,cols,nums,ind+1,size,s);
		if(faro)
			return true;
		arr[posx][posy]=0;
		rows[posx]&=~(1<<(i-1));
		cols[posy]&=~(1<<(i-1));
		nums[posx/4][posy/4][i]--;
	}
	return false;
}
void initialize(int rows[],int cols[],int nums[2][2][9]){
	for(int i=0;i<8;i++){
		rows[i]=0;
		cols[i]=0;
	}
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			for(int k=0;k<9;k++)
				nums[i][j][k]=0;
		}
	}
}
int main(){

	int t;
	cin>>t;

	int arr[8][8];
	int j,k;
	bool faro;
	for(int i=1;i<=t;i++){

		faro=true;
		int rows[8],cols[8];
		int nums[2][2][9];
		initialize(rows,cols,nums);
		vector<pair<int,int>> s;
		for(j=0;j<8;j++){
			for(k=0;k<8;k++){
				cin>>arr[j][k];
				if(arr[j][k]==0){ 
					s.push_back(make_pair(j,k));
					continue;
				}

				if(rows[j] & 1<<(arr[j][k]-1))
					faro=false;
				if(cols[k] & 1<<(arr[j][k]-1))
					faro=false;
				if(nums[j/4][k/4][arr[j][k]]==2)
					faro=false;
				rows[j]|=1<<(arr[j][k]-1);
				cols[k]|=1<<(arr[j][k]-1);
				nums[j/4][k/4][arr[j][k]]++;
			}
		}
		cout<<"Test case #"<<i<<": ";
		if(faro){
			int size=s.size();
	 		faro=verificate(arr,rows,cols,nums,0,size,s);
			if(faro){
				cout<<"YES\n";
				for(j=0;j<8;j++){
					for(k=0;k<8;k++)
						cout<<arr[j][k]<<" ";
					cout<<endl;
				}
			}
			else
				cout<<"NO\n";
		}
		else
			cout<<"NO\n";

	}

	return 0;
}

