/*
Print all Divisors of a given Number
Problem Statement: Given a number, print all the divisors of the number.
A divisor is a number that gives the remainder as zero when divided.
*/

#include<bits/stdc++.h>
using namespace std;

void printDivisorsBruteForce(int n){
	cout<<"The Divisors of "<<n<<" are:"<<endl;

	for(int i = 1; i <= n; i++)
		if(n % i == 0)
			cout << i << " ";
	
	cout << "\n";
}
	
int main(){
		
	printDivisorsBruteForce(36);
	
    return 0;
}

/*
Optimal solution

void printDivisorsOptimal(int n){
    
    cout<<"The Divisors of "<<n<<" are:"<<endl;
	for(int i = 1; i <= sqrt(n); i++)
		if(n % i == 0){
			cout << i << " ";
			if(i != n/i) cout << n/i << " ";
		}
	
	cout << "\n";
}

int main(){
	printDivisorsOptimal(36);
        return 0;
}

*/