#include<iostream>
#include<string>

using namespace std;

int main(){
	string line;
	int t,k=1;
	cin>>t;
	cin.ignore();
	while(t--){
		int arr[100]={0};
		int i=0;
		getline(cin,line);
		for(char &c:line){
			if(c!='.'){
				if(c=='<'){
					i--;
					if(i==-1)
						i=99;
				}
				else if(c=='>'){
					i++;
					if(i==100)
						i=0;
				}
				else if(c=='+'){
					arr[i]++;	
					if(arr[i]==256)
						arr[i]=0;

				}
				else if(c=='-'){
					arr[i]--;
					if(arr[i]==-1)
						arr[i]=255;
				}

			}
		}
		cout<<"Case "<<k++<<": ";
		for(int j=0;j<100;j++){
			int f=arr[j]/16;
			int s=arr[j]%16;
			if(f>=10){
				if(f==10)
					cout<<"A";
				else if(f==11)
					cout<<"B";
				else if(f==12)
					cout<<"C";
				else if(f==13)
					cout<<"D";
				else if(f==14)
					cout<<"E";
				else if(f==15)
					cout<<"F";
			}
			else
				cout<<f;
			if(s>=10)
			{
				if(s==10)
					cout<<"A";
				else if(s==11)
					cout<<"B";
				else if(s==12)
					cout<<"C";
				else if(s==13)
					cout<<"D";
				else if(s==14)
					cout<<"E";
				else if(s==15)
					cout<<"F";

			}
			else
				cout<<s;
			
			if(j!=99)
				cout<<" ";
		}
		cout<<endl;
	}

	return 0;
}
