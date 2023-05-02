/*
Binary number triangle pattern

Problem Statement: Given an integer N, print the following pattern.
1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int spaces = 2*(n-1);

    for(int i=1;i<=n;i++){
        //number
        for(int j=1;j<=i;j++){
            cout << j << " ";
        }

        //spaces
        for(int j=1;j<=spaces;j++){
            cout << " " << " ";
        }

        //number
        for(int j=i;j>=1;j--){
            cout << j << " ";
        }
        cout << endl;
        spaces -= 2;
    }

    return 0;
}