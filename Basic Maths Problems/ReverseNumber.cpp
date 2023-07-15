/*
Reverse a number in C.

Problem Statement: Given a number N reverse the number and print it.
*/

#include<bits/stdc++.h>
using namespace std;

int reverse_number(int n){
    int last_digit=0, rev_num=0;

    while (n!=0)
    {
        last_digit = n%10; // extract the last digit by doing modular of 10
        rev_num = (rev_num*10) + last_digit; // create the number from digits extracted

        n = n/10;
    }

    return rev_num;
}

int main(){
    int n;
    cin >> n;

    cout << "The reverse of " << n << " is " << reverse_number(n);
    return 0;
}