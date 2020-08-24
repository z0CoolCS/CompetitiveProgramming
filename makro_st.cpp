#include<bits/stdc++.h>

using namespace std;

const int maxn=1<<17;

int stp[maxn];
int n[maxn];

int n;

int getSTSize(int n){
  int s=1;
  while(n){
    n<<=1;
    s++;
  }
  return s;
}

void merge(int i,int l,int r){
}

void buildtree(int index,int l,int r){
  if(l==r){
    return st[index]=l[index];
  }

  int left=2*index;
  int right=left+1;
  int mid=(l+r)/2;
  st[index]=min(left[i],right[i]);
}

int getValue(int index,int l,int r,int lo,int hi){
  if(l==lo && hi==r){
    return st[l];
  }
  int mid=(l+r)/2;
  if(lo>mid)
    return getValue(2*index+1,mid+1,right,lo,hi);
  if(hi<mid)
    return getValue(2*index,left,mid,lo,hi);

  int l_res=getValue(2*index,left,mid,lo,hi);
  int r_res=getValue(2*index+1,mid+1,right,lo,hi);

  return st[i]=min(l[i],r[i]);
}



int main(){


  return 0;
}
