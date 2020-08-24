#include<iostream>

using namespace std;

int main(){

	int arr[9];
	while(cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4]>>arr[5]>>arr[6]>>arr[7]>>arr[8]){

		int mini=1<<31-1;
		string ans,aux="CGB";
		int acum=0;
		for(int i=0;i<9;i++)
			acum+=arr[i];
		for(int i=0;i<3;i++){
			for(int j=3;j<6;j++){
				if(i%3==j%3) continue;
				for(int k=6;k<9;k++){
					if(j%3==k%3 || i%3==k%3) continue;

					if(acum-(arr[i]+arr[j]+arr[k])<=mini){
						ans="";
						if(i%3==0)
							ans.append("B");
						else if(i%3==1)
							ans.append("G");
						else
							ans.append("C");
						if(j%3==0)
							ans.append("B");
						else if(j%3==1)
							ans.append("G");
						else
							ans.append("C");
						if(k%3==0)
							ans.append("B");
						else if(k%3==1)
							ans.append("G");
						else
							ans.append("C");
						if(acum-(arr[i]+arr[j]+arr[k])<mini){
							mini=acum-(arr[i]+arr[j]+arr[k]);
							aux=ans;
						}
						else if(acum-(arr[i]+arr[j]+arr[k])==mini){
							if(ans<aux)
								aux=ans;
						}
					}
				}
			}
		}
		cout<<aux<<" "<<mini<<endl;
	}
	return 0;
}
