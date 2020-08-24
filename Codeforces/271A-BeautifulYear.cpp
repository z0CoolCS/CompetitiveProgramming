#include<stdio.h>
#include <string>
using namespace std;
int main(){
   short num;
   string arr;
   scanf("%hd",&num);
   num++;
   arr=std::to_string(num);
   while(arr[3]==arr[2] || arr[3]==arr[1] || arr[3]==arr[0] || arr[2]==arr[1] || arr[2]==arr[0] || arr[1]==arr[0])
   {
     num++;
   arr=std::to_string(num);
}
   printf("%s",arr.c_str());

  return 0;
}
