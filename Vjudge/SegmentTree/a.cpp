#include<bits/stdc++.h>

using namespace std;

//const int maxn=1<<17;
const int maxn=3*1e5;

struct Node{
  int sum,prefix,middle,suffix,best;
  Node(){
    sum = prefix = middle = suffix = best = -15008;
  }
  void init(int val){
    sum = prefix = middle = suffix = best = val;
  }
};

Node st[maxn];
int nums[maxn];

int n;
int lo,hi;

void merge(Node& i,Node& l,Node& r){
  i.sum = l.sum + r.sum;
  i.prefix = max(l.prefix, l.sum + r.prefix);
  i.suffix = max(r.suffix, l.suffix + r.sum);
  i.middle = l.suffix +r.prefix;
  i.best = max({i.sum, i.prefix, i.middle, i.suffix, l.best, r.best});
}

void buildtree(int index,int l,int r){
  if(l==r){
    st[index].init(nums[l]);
    return;
  }

  int left=2*index;
  int right=left+1;
  int mid=(l+r)/2;
  buildtree(left,l,mid);
  buildtree(right,mid+1,r);
  merge(st[index],st[left],st[right]);
}

Node getValue(int index,int l,int r){
  Node ans_t;
  if(l>=lo && r<=hi){
    return st[index];
  } else if(l>hi or r<lo){
    return ans_t;
  }

  int mid=(l+r)/2;
  if(l>mid){
    return getValue(index*2+1,mid+1,r);
  } else if(r<=mid){
    return getValue(index*2,l,mid);
  } else{
    Node lnode= getValue(2*index,l,mid);
    Node rnode=getValue(2*index+1,mid+1,r);
    merge(ans_t,lnode,rnode);
    return ans_t;
  }
}



int main(){

  scanf("%d",&n);
  for(int i=0;i<n;i++)
    scanf("%d",nums+i);

  buildtree(1,0,n-1);

  int m;
  int x,y;
  scanf("%d",&m);
  while(m--){
    scanf("%d %d",&lo,&hi);
    lo--;hi--;
    printf("%d\n",getValue(1,0,n-1).best);
  }

  return 0;
}
