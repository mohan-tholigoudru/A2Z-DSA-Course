/*
Star pyramid

Problem Statement: Given an integer N, print the following pattern.
    *
   ***
  *****
 *******
*********

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        //spaces
        for(int j=0;j<(n-i-1);j++){
            cout << " ";
        }

        //stars
        for(int j=0;j<(2*i+1);j++){
            cout << "*";
        }

        //spaces
        for(int j=0;j<(n-i-1);j++){
            cout << " ";
        }

        cout << endl;
    }

    return 0;
}