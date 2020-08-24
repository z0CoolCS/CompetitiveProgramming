#include <bits/stdc++.h>
using namespace std;

const int N = 200000;

int n;

int tree[2 * N];

void build( int arr[])
{
    for (int i=0; i<n; i++)
        tree[n+i] = arr[i];
    for (int i = n - 1; i > 0; --i)
        tree[i] = tree[i<<1] + tree[i<<1 | 1];
}

void updateTreeNode(int p, int value)
{
    tree[p+n] = value;
    p = p+n;

    for (int i=p; i > 1; i >>= 1)
        tree[i>>1] = tree[i] + tree[i^1];
}

int query(int l, int r)
{
    int res = 0;

    for (l += n, r += n; l < r; l >>= 1, r >>= 1)
    {
        if (l&1)
            res += tree[l++];

        if (r&1)
            res += tree[--r];
    }

    return res;
}

int main()
{
    int x,y,casos=0,faro=false;
    while(cin>>n,n){
        if(faro)
            cout<<endl;
        faro=true;
        int a[n];
        string line;
        for (int i = 0; i < n; ++i)
            cin>>a[i];
        build(a);
        cin.ignore();
        cout<<"Case "<<++casos<<":\n";
        while(getline(cin,line),line!="END"){
            char action=line[0];
            line=line.substr(2,line.size());
            x=atoi(line.substr(0,line.find(" ")).c_str());
            y=atoi(line.substr(line.find(" ")+1,line.size()).c_str());
            if(action=='M')
                cout<<query(x-1,y)<<endl;
            else
                updateTreeNode(x-1,y);
        }



    }



    return 0;
}

