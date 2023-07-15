/*
Check if a number is Armstrong Number or not
Problem Statement: Given a number, check if it is Armstrong Number or Not.
*/

#include<bits/stdc++.h>
using namespace std;

int armstrong_numbers(int num){
    int sum=0, last_digit;

    while(num!=0){
        last_digit = num%10;
        sum = sum + (last_digit*last_digit*last_digit); // sum of cubes of individual digit will be equal to actual digit

        num = num/10;
    }

    return sum;
}

int main(){
    int n = 153;
    //cin >> n;
    int dummy = n;

    int sum = armstrong_numbers(n);

    if(dummy==sum){
        cout << "Armstrong number";
    }else{
        cout << "Not an armstrong number";
    }

    return 0;
}