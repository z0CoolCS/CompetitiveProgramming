#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int c;
    while(cin>>c,c){
        int array[c],dollars,cents,sum=0;
        char p;
        for(int i=0;i<c;i++){
            cin>>dollars>>p>>cents;
            array[i]=dollars*100+cents;
            sum+=array[i];
        }
        int averageBelow=sum/c;
        int averageAbove=averageBelow+(sum%c?1:0);
        int sum1=0,sum2=0;
        for(int i=0;i<c;i++){
            if(array[i]>averageAbove) sum1+=(array[i]-averageAbove);
            else if(array[i]<averageBelow) sum2+=(averageBelow-array[i]);
        }
        sum1=max(sum1,sum2);
        printf("$%d.%.2d\n",abs(sum1/100),abs(sum1%100));

    }
    return 0;
}

