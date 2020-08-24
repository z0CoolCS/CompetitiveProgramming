#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>

using namespace std;

bool verificate(vector<int>& nums,int& currenttime,int& longnums){
	for(int i=0;i<longnums;i++){
		if((currenttime%(nums[i]*2))>=(nums[i]-5))
			return false;
	}
	return true;
}
int main(){
	string line;
	int num,ind=1,time;
	bool faro;
	while(getline(cin,line),line!=""){
		faro=false;
		time=60*60+1;
		vector<int> nums;
		istringstream s(line);
		while(s>>num){
			if(num<time)
				time=num;
			nums.push_back(num);
		}
		int longnums=nums.size();


		time*=2;
		while(time<=60*60 && !faro)
		{
			faro=verificate(nums,time,longnums);
			time++;
		}
		time--;
		if(!faro)
			cout<<"Set "<<ind++<<" is unable to synch after one hour.\n";
		else
			cout<<"Set "<<ind++<<" synchs again at "<<time/60<<" minute(s) and "<<time%60<<" second(s) after all turning green.\n";

	}

	return 0;
}
