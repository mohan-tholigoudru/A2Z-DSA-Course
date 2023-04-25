/*
Inverted right Pyramid

Problem Statement: Given an integer N, print the following pattern.
* * * * *
* * * *
* * *
* *
*

*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}