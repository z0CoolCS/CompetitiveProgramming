#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    int cont=0,ind=-1;
    bool faro=false;
    for(int i=0;i<n;i++){
        if(s[i]=='U'){
            if(ind!=-1){
                faro=false;

                if(i-1-ind>0)
                    cont++;
                ind=-1;
            }
        }
        else{
            if(!faro){
                ind=i;
                faro=true;
            }
            else if(i==n-1){
                if(i-1-ind>0)
                    cont++;
            }
        }

    }
    return cont;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}

