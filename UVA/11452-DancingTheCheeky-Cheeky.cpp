#include<iostream>
#include<vector>

using namespace std;


int main(){
	string word,aux1,axu2;
  int t,i,j;
  cin>>t;
  cin.ignore();
  while(t--){
	  getline(cin,word);
    int size=word.size();
    for(i=size/2;i>0;i--){
      aux1=word.substr(0,i);
      if(aux1==word.substr(i,i))
        break;
    }
    int size2=aux1.size();
    i=size-size2;
    for(j=0;j<8;j++){
      cout<<aux1[i%size2];
      i++;
    }
    cout<<"..."<<endl;
  }

	return 0;
}

