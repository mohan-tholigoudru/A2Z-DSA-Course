/*
Check if a number is Palindrome or Not
Problem Statement:  Given a number check if it is a palindrome.

An integer is considered a palindrome when it reads the same backward as forward.
*/

#include<bits/stdc++.h>
using namespace std;

int reverse_number(int n){
    int last_digit=0, rev_num=0;

    while (n!=0)
    {
        last_digit = n%10;
        rev_num = (rev_num*10) + last_digit;

        n = n/10;
    }

    return rev_num;
}

int main(){
    int n;
    cin >> n;

    int dup_num = n; // store the original num to a duplicate variable
    int x = reverse_number(n); // reverse the given number

    if(dup_num==x){ // compare the reversed number with the actual number stored in duplicate variable
        cout << "The given number " << dup_num << " is a " << "Palindrome";
    }else{
        cout << "The given number " << dup_num << " is not a " << "Palindrome";
    }

    return 0;
}