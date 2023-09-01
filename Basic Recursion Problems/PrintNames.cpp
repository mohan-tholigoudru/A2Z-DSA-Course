/* Print Name N times using Recursion */

#include<bits/stdc++.h>
using namespace std;

void PrintNames(int i, int n){
    if(i > n) return;

    cout << "Mohan TG" << endl;

    PrintNames(i+1,n);
}

int main(){
    int n;
    cin >> n;

    PrintNames(1,n);

    return 0;
}