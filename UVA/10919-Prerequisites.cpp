#include<iostream>
#include<unordered_map>

using namespace std;

int main(){

	int courses, categories,ncourses,nreq,course;
	bool faro;

	while(cin>>courses,courses){
		cin>>categories;
		unordered_map<int,bool> coursesstate;
		faro=true;
		for(int i=0;i<courses;i++){
			cin>>course;
			coursesstate[course]=1;
		}
		for(int i=0;i<categories;i++){
			cin>>ncourses>>nreq;

			for(int j=0;j<ncourses;j++){
				cin>>course;
				if(coursesstate[course])
					nreq--;
			}
			if(nreq>0)
				faro=false;

		}
		if(faro)
			cout<<"yes\n";
		else
			cout<<"no\n";
	}

	return 0;
}
