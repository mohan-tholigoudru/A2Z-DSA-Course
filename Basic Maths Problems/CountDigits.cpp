/*
Count digits in a number

Problem Statement: Given an integer N, write a program to count the number of digits in N.
*/

#include<bits/stdc++.h>
using namespace std;

int count_digits(int n){
    int x=n, count=0;

    while (x!=0)
    {
        x = x/10; // extract the individual digit in the number by doing divide by 10
        count++;
    }

    return count;
}

int main(){
    int n;
    cin >> n;

    cout << "Number of digits in " << n << " is " << count_digits(n);
    return 0;
}