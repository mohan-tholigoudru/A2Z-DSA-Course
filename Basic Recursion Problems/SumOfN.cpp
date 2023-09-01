/* Sum of first N Natural Numbers */

#include<bits/stdc++.h>
using namespace std;

void PrintSumOfN(int i, int sum){
    if(i<1)
    {
       cout<<sum<<endl;
       return;
    }
    PrintSumOfN(i-1,sum+i);
}

int main(){
    int n;
    cin >> n;

    PrintSumOfN(n,0);

    return 0;
}