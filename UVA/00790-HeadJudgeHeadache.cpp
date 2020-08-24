#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<sstream>
#include<stdio.h>

using namespace std;

struct team{
	int num;
	int ctimesprob[7]={0};
	bool solvedprob[7];
	int cantres;
	int minuts;
	bool faro;
	vector<vector<pair<int,int>>> tprob=vector<vector<pair<int,int>>>(7,vector<pair<int,int>>(0));
	vector<pair<int,int>> timesbyprob=vector<pair<int,int>>(7,make_pair(0,0));
	bool operator<(team &other){
		if(other.cantres==cantres){
			if(minuts==other.minuts){
				faro=true;
				return num<other.num;
			}
			return minuts<other.minuts;
		}
		return cantres>other.cantres;
	}
};
int main(){

	int t;
	cin>>t;
	cin.ignore();
	string blank;
	getline(cin,blank);
	bool space=false;
	while(t--){
		if(space)
			cout<<endl;

	bool teamstate[26]={false};
	int ctimesprob[7]={0};
	bool solvedprob[7]={0};
	team t={-1,*ctimesprob,*solvedprob,0,0,false};
	team teams[26]={t};

	string line;
	string word;
	int i;
	int teamnum;
	int prob;
	int pos;
	int hs;
	int ms;
	int maxteam=-1;
	while(getline(cin,line),line!=""){
		stringstream ss(line);
		i=0;

		while(ss>>word){
			if(i==0){
				teamnum=atoi(word.c_str());
				teams[teamnum].num=teamnum;
				if(maxteam<teamnum)
					maxteam=teamnum;
				if(!teamstate[teamnum])
					teamstate[teamnum]=true;
			}
			else if(i==1)
				prob=word[0]-'A';
			
			else if(i==2){
				pos=word.find(":");
				hs=atoi(word.substr(0,pos).c_str());
				ms=atoi(word.substr(pos+1,word.size()).c_str());
			}
			else{
				if(word=="Y"){
					if(!teams[teamnum].solvedprob[prob]){
						teams[teamnum].cantres++;
						teams[teamnum].solvedprob[prob]=true;
					}
					if(teams[teamnum].timesbyprob[prob].first==0 && teams[teamnum].timesbyprob[prob].second==0){
						teams[teamnum].minuts+=hs*60+ms;
						teams[teamnum].timesbyprob[prob].first=hs;
						teams[teamnum].timesbyprob[prob].second=ms;

					}
					else{
						if((hs<=teams[teamnum].timesbyprob[prob].first && ms<teams[teamnum].timesbyprob[prob].second) || (hs<teams[teamnum].timesbyprob[prob].first && teams[teamnum].timesbyprob[prob].second<=ms))
						{
							teams[teamnum].minuts-=(teams[teamnum].timesbyprob[prob].first*60+teams[teamnum].timesbyprob[prob].second);
							teams[teamnum].minuts+=hs*60+ms;
						}
					}
					for(auto &c:teams[teamnum].tprob[prob]){
						if((c.first<=hs && c.second<ms) || (c.first<hs && c.second>=ms))
							teams[teamnum].minuts+=20;
					}
				}
				else
					teams[teamnum].tprob[prob].push_back(make_pair(hs,ms));

					
			}
			i++;
			
		}

	}

	vector<team> teamsup;
	
	for(int j=1;j<26;j++){
		if(teamstate[j])
			teamsup.push_back(teams[j]);
		else if(j<maxteam){
			teams[j].num=j;
			teams[j].faro=true;
			teamsup.push_back(teams[j]);

		}

	}
		
	sort(teamsup.begin(),teamsup.end());
	
	printf("RANK TEAM PRO/SOLVED TIME\n");
	i=0;
	for(int j=0;j<teamsup.size();j++){
		if(!teamsup[j].faro)
			i=0;
		if(teamsup[j].cantres)
			printf("%4d %4d %4d       %4d",(1+j-i),teamsup[j].num,teamsup[j].cantres,teamsup[j].minuts);
		else
			printf("%4d %4d",(1+j-i),teamsup[j].num);
		cout<<endl;
		if(teamsup[j].faro)
			i++;
		
	}
		space=true;
	}

	return 0;
}
