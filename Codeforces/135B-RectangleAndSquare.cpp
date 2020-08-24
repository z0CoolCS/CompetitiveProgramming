#include<bits/stdc++.h>

using namespace std;
using pii=pair<int,int>;
const double eps = 1e-6;

string init= "00001111";

struct point{
  int x,y,i;
  bool operator<(const point& cmp){
    if(x==cmp.x){
      return y>=cmp.y;
    }
    return x<cmp.x;
  }
};

bool is_right(point& i,point& j,point& k){
  int x1=j.x-i.x;
  int y1=j.y-i.y;
  int x2=k.x-j.x;
  int y2=k.y-j.y;
  if(x1*x2+y1*y2==0){
    return true;
  }
  return false;
}

double dist(point& i,point& j){
  int xr=i.x-j.x;
  int yr=i.y-j.y;
  return sqrt(xr*xr+yr*yr);
}

bool is_square(point s[]){
  double d1=dist(s[0],s[1]);
  double d2=dist(s[2],s[3]);
  double d3=dist(s[1],s[2]);
  double d4=dist(s[1],s[3]);
  double d5=dist(s[0],s[2]);
  double d6=dist(s[0],s[3]);
  if(d1==d2){
    if(is_right(s[0],s[1],s[2]) && is_right(s[0],s[3],s[2]) && abs(d1-d3)<=eps){
      return true;
    }
    if(is_right(s[0],s[1],s[3]) && is_right(s[0],s[2],s[3]) && abs(d1-d4)<=eps){
      return true;
    }
  }
  return false;
}

bool is_rect(point s[]){
  if(is_right(s[0],s[1],s[2]) && is_right(s[0],s[3],s[2])){
    return true;
  }
  if(is_right(s[0],s[1],s[3]) && is_right(s[0],s[2],s[3])){
    return true;
  }
  return false;
}

int main(){

  pii p[8];
  for(int k=0;k<8;k++){
    scanf("%d %d",&p[k].first,&p[k].second);
  }

  point squ[4]; 
  point rec[4]; 
  bool faro=false;
  int i,j;
  do{ 
    i=0; 
    j=0; 
    for(int k=0;k<8;k++){
      if(init[k]=='0'){
        squ[i].x=p[k].first;
        squ[i].y=p[k].second;
        squ[i].i=k+1;
        i++;
      }
      else{
        rec[j].x=p[k].first;
        rec[j].y=p[k].second;
        rec[j].i=k+1;
        j++;
      }
    }
    sort(squ,squ+4);
    sort(rec,rec+4);


    if(is_square(squ) && is_rect(rec)){
      faro=true;
      break;
    }

  }while(next_permutation(begin(init),end(init)));

  if(faro){
    printf("YES\n");
    for(i=0;i<4;i++){
      printf("%d ",squ[i].i);
    }
    printf("\n");
    for(i=0;i<4;i++){
      printf("%d ",rec[i].i);
    }
    printf("\n");
  }
  else{
    printf("NO\n");
  }

  return 0;
}
