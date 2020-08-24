#include <iostream>
using namespace std;


bool looking(bool *arr,int n){
    for(int i=1;i<n;i++){
        if(arr[i]==0)
            return false;
    }

        return true;
}
int main(){

    int n;
    int back,aux,temp;
    while(cin>>n){
        bool arr[3000]={0};
        cin>>back;
        for(int i=0;i<n-1;i++){
            cin>>aux;
            temp=abs(aux - back);
            if(1 != arr[temp])
                arr[temp]=1;
            back=aux;
        }


        if(looking(arr,n))
            cout<<"Jolly"<<"\n";
        else
            cout<<"Not jolly"<<"\n";

    }

    return 0;
}

