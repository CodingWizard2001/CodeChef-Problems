// For a positive integer M, MoEngage defines digitSum(M) as the sum of digits of the number M (when written in decimal). Given a positive integer N, find the smallest integer X strictly greater than N such that: digitSum(N) and digitSum(X) have different parity, i.e. one of them is odd and the other is even.


#include <bits/stdc++.h>
using namespace std;
int digitSum(int num){
    int sum = 0;
    while(num != 0){
        int digit = (num % 10);
        sum += digit;
        num /= 10;
    }
    return sum;
}
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int num;
        // cout<<"Enter a number : ";
        cin>>num;
        int sumN = digitSum(num);

        int anotherDigit = (num + 1);
        while(true){
            int sumX = digitSum(anotherDigit);
            if((sumN % 2) != (sumX % 2)){
                cout<<anotherDigit<<endl;
                break;
            }
            anotherDigit++;
        }
    }
}