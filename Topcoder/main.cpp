#include<iostream>
#include<vector>
#include<string>
#include "BadNeighbors.cpp"

using namespace std;

int main(){

  BadNeighbors z;
  vector<int> v={10,3,2,5,7,8};
  cout<<z.maxDonations(v)<<endl;
  vector<int> v2={7,7,7,7,7,7,7};
  cout<<z.maxDonations(v2)<<endl;



  return 0;
}
