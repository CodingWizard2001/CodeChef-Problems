// A string is said to be using strong language if it contains at least K consecutive characters '*'. You are given a string S with length N. Determine whether it uses strong language or not.




#include <bits/stdc++.h>
using namespace std;

int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int len;
        // cout<<"Enter the length : ";
        cin>>len;

        int k;
        // cout<<"Enter the value k : ";
        cin>>k;

        string s;
        // cout<<"Enter string : ";
        cin>>s;
        
        int count = 0,maxCount = 0;
        for(int i = 0;i < len;i++){
            if(s[i] == '*') count++;
            else count = 0;
            maxCount = max(maxCount,count);
        }
        
        if(maxCount >= k) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}