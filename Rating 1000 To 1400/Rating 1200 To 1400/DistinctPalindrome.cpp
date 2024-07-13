// Given integers N and X, generate a palindrome of length N consisting of lowercase English alphabets such that the number of distinct characters in the palindrome is exactly X. If it is impossible to do so, print -1 instead.




#include <bits/stdc++.h>
using namespace std;

int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int n,x;
        cin>>n>>x;
        
        if(x > n || (n < (2 * x - 1))){
            cout<<-1<<endl;
        }
        else{
            string result(n,' ');
            for(int i = 0;i < x;i++){
                result[i] = 'a' + i;
                result[n - 1 - i] = 'a' + i;
            }
            
            for(int i = x;i < (n - x);i++){
                result[i] = 'a';
            }
            cout<<result<<endl;
        }
    }
}