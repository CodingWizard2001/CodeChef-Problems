// Chef has a string A (containing lowercase Latin letters only) of length N where N is even. He can perform the following operation any number of times: Swap Ai and Ai+2 for any 1 ≤ i ≤ (N - 2). Determine if Chef can convert string A to a palindromic string.




#include <bits/stdc++.h>
using namespace std;

int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int n;
        cin>>n;
        
        string s;
        cin>>s;
        
        vector<int>odd(26,0);
        vector<int>even(26,0);
        
        for(int i = 0;i < n;i++){
            if(i % 2 == 0) even[s[i] - 'a']++;
            else odd[s[i] - 'a']++;
        }
        
        bool flag = true;
        for(int i = 0;i < 26;i++){
            if(odd[i] != even[i]){
                flag = false;
                break;
            }
        }
        
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}