// Chef has two integers A and B. Chef wants to find the minimum value of lcm(A,X)−gcd(B,X) where X is any positive integer. Help him determine this value.



#include <bits/stdc++.h>
using namespace std;

int main() {
    int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int n1,n2;
        cin>>n1>>n2;
        cout<<n1 - __gcd(n1,n2)<<endl;
    }
}