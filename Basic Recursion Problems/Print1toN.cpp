/* Print 1 to N using Recursion */

#include<bits/stdc++.h>
using namespace std;

void Print1toN(int i, int n){
    if(i > n) return;

    cout << i << endl;

    Print1toN(i+1,n);
}

int main(){
    int n;
    cin >> n;

    Print1toN(1,n);

    return 0;
}