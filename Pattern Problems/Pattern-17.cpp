/*
Alpha-Hill Pattern

Problem Statement: Given an integer N, print the following pattern.
      A
    A B A
  A B C B A
A B C D C B A

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        //spaces
        for(int j=0;j<(n-i-1);j++){
            cout << " " << " ";
        }

        //characters
        char ch = 'A';
        int breakpoint = (2*i+1)/2;

        for(int j=1; j<=(2*i+1); j++){
            cout << ch << " ";
            if(j <= breakpoint) ch++;
            else ch--;
        }
        

        //spaces
        for(int j=0;j<(n-i-1);j++){
            cout << " " << " ";
        }

        cout << endl;
    }
}