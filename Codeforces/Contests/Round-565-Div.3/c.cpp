#include<iostream>
#include<algorithm>
#include<vector>
typedef long long ll;

using namespace std;

int main(){
  int n,num,i;
  cin>>n;
  vector<int> v1,v2,v3,v4,v5,v6;
  for(i=0;i<n;i++){
    cin>>num;
    if(num==4)
      v1.push_back(i);
    else if(num==8)
      v2.push_back(i);
    else if(num==15)
      v3.push_back(i);
    else if(num==16)
      v4.push_back(i);
    else if(num==23)
      v5.push_back(i);
    else
      v6.push_back(i);
  }
  int c1=v1.size(),c2=v2.size(),c3=v3.size(),c4=v4.size(),c5=v5.size(),c6=v6.size();
  int i1,i2,i3,i4,i5,i6;
  i1=i2=i3=i4=i5=i6=0;

  int cont=0;
  while(i1!=c1 && i2!=c2 && i3!=c3 && i4!=c4 && i5!=c5 && i6!=c6){
    while(v1[i1]>v2[i2] && i2!=c2){
      cont++;
      i2++;
    }
    if(i2==c2)
      break;

    while(v2[i2]>v3[i3] && i3!=c3){
      cont++;
      i3++;
    }
    if(i3==c3)
      break;
    while(v3[i3]>v4[i4] && i4!=c4){
      cont++;
      i4++;
    }
    if(i4==c4)
      break;
    while(v4[i4]>v5[i5] && i5!=c5){
      cont++;
      i5++;
    }
    if(i5==c5)
      break;
    while(v5[i5]>v6[i6] && i6!=c6){
      cont++;
      i6++;
    }
    if(i6!=c6)
      i1++,i2++,i3++,i4++,i5++,i6++;
  }
  cont+=(c1-i1);
  cont+=(c2-i2);
  cont+=(c3-i3);
  cont+=(c4-i4);
  cont+=(c5-i5);
  cont+=(c6-i6);

  cout<<cont<<endl;

  return 0;
}
