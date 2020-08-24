#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
struct url{
	string urlcad;
	int relevance;
	int pos;

	bool operator<(const url &other){
		if(relevance==other.relevance)
			return other.pos>pos;
		return other.relevance<relevance;
	}
};
int main(){
	int t,j=1;
	cin>>t;
	string urlcad;
	int relevance;
	while(t--){
		vector<url> urls;

		for(int i=0;i<10;i++){
			cin>>urlcad>>relevance;
			url urlobj{urlcad,relevance,i};
			urls.push_back(urlobj);
		}
		sort(urls.begin(),urls.end());
		relevance=urls[0].relevance;
		cout<<"Case #"<<j++<<":\n";
		for(int i=0;i<10;i++){
			if(urls[i].relevance==relevance)
				cout<<urls[i].urlcad<<endl;
			else
				break;
		}

	}

	return 0;
}
