#include<stdio.h>

using namespace std;

int main()
{
      int n,aux,cont= 0;
      int arr[5]={0};
      scanf("%d",&n);
      while (n--)
      {
        scanf("%d",&aux);
        arr[aux]++;
      }
      cont+= arr[4]+arr[3]+arr[2]/2;
      arr[1] -= arr[3];
      if (arr[2] % 2)
      {
         cont++ ;
         arr[1] -= 2;
      }
     if (arr[1] > 0)
         cont += (arr[1] + 3) / 4;

      printf("%d\n",cont);
    return 0;
}
