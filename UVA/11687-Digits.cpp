#include<iostream>
#include<string>

using namespace std;

int main(){
	string snum;
	int num,numa,i;
	while(cin>>snum,snum!="END"){
		if(snum=="1"){
			cout<<1<<endl;
			continue;
		}
		num=snum.size();
		numa=-1;

		i=1;
		while(numa!=num){
			numa=num;
			i++;
			snum=to_string(num);
			num=snum.size();
		}
		cout<<i<<endl;
	}


	return 0;
}
