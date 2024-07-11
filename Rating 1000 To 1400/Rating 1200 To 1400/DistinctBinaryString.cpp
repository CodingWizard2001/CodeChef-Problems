// You are given a binary string S of length N. You have to perform the following operation exactly once: Select an index (1 ≤ i ≤ N) and delete Si from S. The remaining parts of S are concatenated in the same order. How many distinct binary strings of length N - 1 can you get after applying this operation?




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
        
        string str;
        // cout<<"Enter the string : ";
        cin>>str;
        
        int count = 0;
        for(int i = 1;i < len;i++){
            if(str[i - 1] != str[i]) count++;
        }
        cout<<(count + 1)<<endl;
    }
}