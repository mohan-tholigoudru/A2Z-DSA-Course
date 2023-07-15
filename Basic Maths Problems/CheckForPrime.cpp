/*
Check if a number is prime or not
Problem Statement: Given a number, check whether it is prime or not.
A prime number is a natural number that is only divisible by 1 and by itself.
*/

#include<bits/stdc++.h>
using namespace std;

int prime_number(int n){
    int count = 0;

    for(int i=1; i<=n; i++){
        if(n%i==0){
            count++;
        }
    }

    return count;
}

int main() {
  int n = 11;

  int cnt = prime_number(n);

  if(cnt == 2){
    cout << "The given number " << n << " is a Prime number.";
  }else{
    cout << "The given number " << n << " is not a Prime number.";
  }
  return 0;
}

/*
Optimal solution

int prime_number(int n){
    int count = 0;

    for(int i=1; i*i<=n; i++){ // i*i is the other way of using sqrt function.
        if(n%i==0){
            count++;
            if((n/i) != i) count++;
        }
    }

    return count;
}

int main() {
  int n = 11;

  int cnt = prime_number(n);

  if(cnt == 2){
    cout << "The given number " << n << " is a Prime number.";
  }else{
    cout << "The given number " << n << " is not a Prime number.";
  }
  return 0;
}
*/