#include<bits/stdc++.h> 

using namespace std; 

int main() { 

  int t,n; 
  cin>>t;
  string line; 
  while (t--) {
    cin>>n;
    cin.ignore();
    getline(cin,line);

    int i;

    for (i=n-1 ; i>=0 ; i--) {
      if(line[i]=='0')
        break; 
    } 

    int j
    for (j=i ; j>=0 ; j--) { 
      if(line[j]=='1') 
        break; 
    }
    j++;
    for(; j<n; j++)
      cout<<line[j];
  }
  return 0; 
}
