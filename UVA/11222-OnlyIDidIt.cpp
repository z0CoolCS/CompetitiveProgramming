#include<iostream>
#include<set>
#include<bitset>
#include<algorithm>

using namespace std;

struct person{
	int solved;
	bitset<10001> problems;
};
int main(){
	
	int t,s,p,saux,ind=0;
	cin>>t;
	while(t--){
		set<int> repeated;
		cin>>s;
		bitset<10001> problems;
		int saux=s;
		for(int i=0;i<s;i++){
			cin>>p;
			if(problems[p]==1)
				saux--;
			else
				problems[p]=1;
		}
		person person1{saux,problems};
		problems.reset();
		cin>>s;
		saux=s;
		for(int i=0;i<s;i++){
			cin>>p;
			if(problems[p]==1)
				saux--;
			else
				problems[p]=1;
			if(person1.problems[p])
				repeated.insert(p);
			
		}
		person person2{saux,problems};

		problems.reset();
		cin>>s;
		saux=s;
		for(int i=0;i<s;i++){
			cin>>p;
			if(problems[p]==1)
				saux--;
			else
				problems[p]=1;
			if(person1.problems[p] || person2.problems[p])
				repeated.insert(p);
			
		}
		person person3{saux,problems};

		for(auto c:repeated){
			if(person1.problems[c]){
				person1.problems[c]=0;
				--person1.solved;
			}
			if(person2.problems[c]){
				person2.problems[c]=0;
				--person2.solved;
			}
			if(person3.problems[c]){
				person3.problems[c]=0;
				--person3.solved;
			}
		}
		cout<<"Case #"<<++ind<<":\n";
		bool faro=false;
		int maxi=max(person1.solved,max(person2.solved,person3.solved));
		if(person1.solved==maxi){
			cout<<"1 "<<person1.solved;
			if(person1.solved!=0)
				cout<<" ";
			for(int i=0;i<10001;i++){
				if(person1.problems[i]){
					if(faro)
						cout<<" ";
					cout<<i;
					faro=true;
				}
			}
			cout<<endl;
		}
		if(person2.solved==maxi){
			cout<<"2 "<<person2.solved;
			if(person2.solved!=0)
				cout<<" ";
			faro=false;
			for(int i=0;i<10001;i++){
				if(person2.problems[i]){
					if(faro)
						cout<<" ";
					cout<<i;
					faro=true;
				}
			}
			cout<<endl;
		}
		if(person3.solved==maxi){
			faro=false;
			cout<<"3 "<<person3.solved;
			if(person3.solved!=0)
				cout<<" ";
			for(int i=0;i<10001;i++){
				if(person3.problems[i]){
					if(faro)
						cout<<" ";
					cout<<i;
					faro=true;
				}
			}
			cout<<endl;
		}

		
	}

	return 0;
}
