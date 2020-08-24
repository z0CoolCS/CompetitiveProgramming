#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  unsigned int n;
  cin>>n;
  vector<unsigned long long> numbers;
  for(unsigned int i=0;i<n;i++){
    unsigned long long aux;
    cin>>aux;
    numbers.push_back(aux);
  }
  sort(numbers.begin(),numbers.end());
  vector<unsigned long long> numbers2;
  for(unsigned int i=0;i<n-1;i++){
    unsigned long long aux;
    cin>>aux;
    numbers2.push_back(aux);
  }
  sort(numbers2.begin(),numbers2.end());
  set_difference(numbers.begin(),numbers.end(),numbers2.begin(),numbers2.end(),numbers.begin());
  cout<<*numbers.begin()<<endl;
  vector<unsigned long long> numbers3;
  for(unsigned int i=0;i<n-2;i++){
    unsigned long long aux;
    cin>>aux;
    numbers3.push_back(aux);
  }
  sort(numbers3.begin(),numbers3.end());
  set_difference(numbers2.begin(),numbers2.end(),numbers3.begin(),numbers3.end(),numbers2.begin());
  cout<<*numbers2.begin()<<endl;

  return 0;
}
