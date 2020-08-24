#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
   string word,rword,aword;
   cin>>rword>>aword;
   word=rword;
   reverse(rword.begin(),rword.end());
   if(rword==aword)
     cout<<"YES";
   else
     cout<<"NO";

    return 0;
  }
