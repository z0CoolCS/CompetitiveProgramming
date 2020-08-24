#include<stdio.h>
using namespace std;

int main(){
   
   int n,aux,cont=0;
   scanf("%d",&n);
   int arr[5]={0};
   while(n--){
     scanf("%d",&aux);
     if(aux==4)
       cont++;
     else if(aux==3){
       if(arr[1]>0){
         arr[1]--;
         cont++;
       }
       else
         arr[3]++;       
     }
     else if(aux==2){
       if(arr[2]){
         cont++;
         arr[2]--;
         }
       else if(arr[1]>=2){
         cont++;
         arr[1]-=2;
       }
       else
         arr[2]++;
     }
     else{
       if(arr[3]>0){
         arr[3]--;
         cont++;
       }
      else if(arr[2]>0 && arr[1]>0){
        cont++;
        arr[2]--;
        arr[1]--;
      }
      else if(arr[1]>=3){
        cont++;
        arr[1]-=3;
      }
      else
        arr[1]++;
     }
   }
  /* if(arr[1] && arr[2]){
     cont++;
     arr[1]--;
     arr[2]--;
   }
   if(arr[1]){
     cont++;
   }*/
   cont+=arr[2];
   arr[1]-=arr[2];
   cont+=(arr[1]+3)/4;
   cont+=arr[3];
   printf("%d\n",cont);
  return 0;
}
