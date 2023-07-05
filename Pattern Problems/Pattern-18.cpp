/*
Alpha-Triangle Pattern

Problem Statement: Given an integer N, print the following pattern.
E
D E
C D E
B C D E
A B C D E

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        for(char ch='E'-i; ch<='E'; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}