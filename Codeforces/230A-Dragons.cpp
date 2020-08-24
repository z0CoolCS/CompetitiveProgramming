#include<stdio.h> 
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  int s,n;
  scanf("%d %d",&s,&n);
  vector<pair<int,int>> dragons;
  while(n--){
    int x,y;
  scanf("%d %d",&x,&y);
  if(s>x)
    s+=y;
  else
    dragons.push_back(pair<int,int>(x,y));
 }
 int cont=0;
 sort(dragons.begin(),dragons.end());
 int size=dragons.size();
 bool faro=false;
 for(int i=0;i<size;i++){
   if(dragons[i].first>=s){
     faro=true;
     break;
   }
   else
     s+=dragons[i].second;
 }
 if(faro)
   printf("NO");
 else
   printf("YES");

   return 0;
}
