#include<stdio.h>
#include<cmath>
int main(){
  unsigned int n,cont=0;
  unsigned long long x;
  scanf("%d %llu",&n,&x);
  if(n>=x)
    cont+=2;
  unsigned int root=sqrt(x);
  if(root>n)
    root=n;
  for(int i=2;i<=root;i++)
  {
    if(x%i==0 && (x/i)<=n)
      cont+=2;
  }
  if(root*root==x)
    cont--;

  printf("%d\n",cont);
  return 0;
}

