#include<bits/stdc++.h>

using namespace std;
const int maxn=1<<21;

int st[maxn]; 
int lo,hi; 
string line; 
int long_cad;

int query(int index,int l,int r){
  if (lo<=l && r<=hi)
    return st[index]; 
  if(l>hi || lo>r)
    return 0;

  int mid=(l+r)/2; 
  int left=index*2; 
  int right=left+1; 
  return query(left,l,mid)+query(right,mid+1,r);  
}

void build(int index,int l,int r){
  if (l==r) { 
    st[index]=0; 
    return; 
  } 
  int mid=(l+r)/2; 
  int left=index*2; 
  int right=left+1; 
  build(left,l,mid);
  build(right,mid+1,r);
  st[index]=st[left]+st[right]+line[mid]==line[mid+1]; 
}

int main(){

  getline(cin,line);
  long_cad=line.size();

  build(1,0,long_cad-1);
  int m;
  scanf("%d",&m);
  while (m--) { 
    scanf("%d %d",&lo,&hi); 
    lo--;hi--;
    printf("%d\n",query(1,0,long_cad-1)); 
  } 

  return 0;
}
