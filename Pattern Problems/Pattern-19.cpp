/*
Symmetric-Void Pattern

Problem Statement: Given an integer N, print the following pattern.
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int iniSpace = 0;
    for(int i=0; i<n; i++){        
        //stars
        for(int j=1; j<=n-i; j++){
            cout << "*";
        }

        //spaces
        for(int j=0; j<iniSpace; j++){
            cout << " ";
        }

        //stars
        for(int j=1; j<=n-i; j++){
            cout << "*";
        }
        iniSpace += 2;
        cout << endl;
    }

    iniSpace = 2*n-2;
    for(int i=1; i<=n; i++){        
        //stars
        for(int j=1; j<=i; j++){
            cout << "*";
        }

        //spaces
        for(int j=0; j<iniSpace; j++){
            cout << " ";
        }

        //stars
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        iniSpace -= 2;
        cout << endl;
    }
}