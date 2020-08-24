#include<bits/stdc++.h>

using namespace std;
const int maxn=1<<19;

int st[maxn];
int nums[maxn];
int n;
void build(int index,int l,int r,bool op){
  if(l==r){
    st[index]=nums[l];
    return;
  }
  int mid=(l+r)/2;
  int left=index*2;
  int right=left+1;
  build(left,l,mid,!op);
  build(right,mid+1,r,!op);
  if(op){
    st[index]=st[left] | st[right];
  }
  else{
    st[index]=st[left] ^ st[right];
  }
}

int getValue(int p,int b,int index,int l,int r,bool op){
  if(l==r){
    return st[index]=b;
  }
  int mid=(l+r)/2;
  int left=index*2;
  int right=left+1;

  if(p<=mid){
    st[left]=getValue(p,b,left,l,mid,!op);
  } else{
    st[right]=getValue(p,b,right,mid+1,r,!op);
  }

  if(op){
    return st[index]=st[left] | st[right];
  }
  else{
    return st[index]=st[left] ^ st[right];
  }
}

int main(){
  int nb,m,p,b;
  scanf("%d %d",&nb,&m);
  int n=1<<nb;
  for(int i=0;i<n;i++){
    scanf("%d",nums+i);
  }
  int cont=0;

  bool op;
  op=nb%2;
  build(1,0,n-1,op);

  while(m--){
    scanf("%d %d",&p,&b);
    p--;
    printf("%d\n",getValue(p,b,1,0,n-1,op));
  }

  return 0;
}
