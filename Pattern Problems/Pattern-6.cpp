/*
Inverted numbered right Pyramid

Problem Statement: Given an integer N, print the following pattern.
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=1;i<=n;i++){ //for (int i = 0; i < N; i++)
        for(int j=1;j<=(n-i+1);j++){ //for (int j =N; j>i; j--)
            cout << j << " "; //cout <<N-j+1<<" ";
        }
        cout << endl;
    }
    
    return 0;
}
