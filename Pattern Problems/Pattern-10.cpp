/*
Half Diamond star pattern

Problem Statement: Given an integer N, print the following pattern.
*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=1;i<=2*n-1;i++){
        int stars = i;
        if(i>n) stars = 2*n-i;

        for(int j=1;j<=stars;j++){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}