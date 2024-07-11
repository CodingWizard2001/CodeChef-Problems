// Chef is given a number in form of its binary representation S, having length N. Determine if the number can be represented as a sum of exactly three non-negative powers of 2. Please refer to samples for further explanation.



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
        
        int count = 0;
        for(auto &c: s){
            if(c == '1') count++;
        }
        
        if(s == "1" || s == "10") cout<<"NO"<<endl;
        else if(count <= 3) cout<<"Yes"<<endl;
        else cout<<"NO"<<endl;
    }
}