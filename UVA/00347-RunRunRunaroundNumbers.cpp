#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

//unordered_map<int,bool> arr;
bool arr[10000000] = {0};
void validate(){
  string num;
  int size,j,cont;
  for(int i=10;i<10000000;i++){
    num=to_string(i);
    size=num.size();
    bool val[size]={0};
    bool nums[10]={0};
    cont=0;
    for(j=0;j<size &&  !nums[num[j]-'0'];j++){
      nums[num[j]-'0']=1;
      cont++;
    }
    if(cont!=size)
      continue;

    cont=0;
    for(j=0;;){
      if(val[j])
        break;
      val[j]=1;
      j+=num[j]-'0';
      j%=size;
      cont++;
    }
    if(cont==size && j==0){
      arr[i]=1;
    }
  }
}
int main(){

  validate();
  int num;
  int ind=0;
  while(cin>>num,num){
    ind++;
    while(!arr[num])
      num++;
    cout<<"Case "<<ind<<": "<<num<<endl;
  }


  return 0;
}
