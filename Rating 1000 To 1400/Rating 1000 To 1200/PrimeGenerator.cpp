// Ram wants to generate some prime numbers for his cryptosystem. Help him please! Your task is to generate all prime numbers between two given numbers.


#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n == 1 || n == 0) return false;
    for(int i = 2;(i * i) <= n;i++){
        if(n % i == 0) return false;
    }
    return true;
}
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int lowerLimit,upperLimit;
        // cout<<"Enter the lower limit : ";
        cin>>lowerLimit;
        // cout<<"Enter the upper limit : ";
        cin>>upperLimit;
        for(int i = lowerLimit;i <= upperLimit;i++){
            if(isPrime(i)) cout<<i<<endl;
        }
    }
}