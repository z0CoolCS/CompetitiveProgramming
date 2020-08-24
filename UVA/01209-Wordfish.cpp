#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int mindistance(string word){
	int size=word.size();
	int mini=27;
	int dis;

	for(int i=1;i<size;i++){
		dis=abs(word[i]-word[i-1]);
		if(mini>dis)
			mini=dis;
	}
	return mini;
}

struct w{
	string word;
	int dis;
	int pos;
	bool operator<(const w &other){
		if(dis==other.dis)
			return word<other.word;
		return dis>other.dis;
	}
};
int main(){

	string word;
	string wordcp;
	int dismin;
	int pos;
	while(getline(cin,word)){
		vector<w> words;
		wordcp=word;
		dismin=mindistance(word);
		pos=11;
		words.push_back(w{word,dismin,pos});
		for(int i=0;i<10;i++){
			next_permutation(word.begin(),word.end());
			dismin=mindistance(word);
			pos++;
			words.push_back(w{word,dismin,pos});
		}
		word=wordcp;
		pos=11;
		for(int i=0;i<10;i++){
			prev_permutation(word.begin(),word.end());
			dismin=mindistance(word);
			pos--;
			words.push_back(w{word,dismin,pos});
		}
		sort(words.begin(),words.end());
		cout<<words[0].word<<words[0].dis<<endl;
		
	}



	return 0;
}
