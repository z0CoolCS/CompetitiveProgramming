#include<iostream>
#include<cstring>
#include<vector>

using namespace std;

int main(){

	string line;

	while(getline(cin,line)){
		vector<string> v;
		v.push_back(line);
		while(getline(cin,line),line!="#")
			v.push_back(line);

		int sizev=v.size();
		char arr[26];
		int  arrc[26];
		memset(arr,'-',sizeof arr);
		memset(arrc,0,sizeof arrc);
		for(int i=1;i<sizev;i++){
			string s1=v[i-1];
			string s2=v[i];
			int size1=s1.size();
			int size2=s2.size();
			if(size1>size2)
				size1=size2;
			for(int j=0;j<size1;j++){
				if(s1[j]!=s2[j]){
					if(arr[s1[j]-'A']=='-')
						arr[s1[j]-'A']=s2[j];
					break;
				}
			}
		}
		int pos;
		for(int i=0;i<26;i++){
			cout<<arrc[i];
			arrc[i+'A']++;
			while(c!='-'){
				arrc[c-'A']++;
				c=arr[c-'A'];
			}
		}
		cout<<endl;
		char c='A'+pos;
		while(c!='-'){
			cout<<c;
			c=arr[pos];
			pos=c-'A';
		}
		cout<<endl;
	}
	return 0;
}
