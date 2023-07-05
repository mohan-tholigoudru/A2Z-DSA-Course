/*
Increasing Letter Triangle Pattern

Problem Statement: Given an integer N, print the following pattern.
A
A B
A B C
A B C D
A B C D E

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        for(char ch='A'; ch<='A'+i; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}