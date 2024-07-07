// Chef has two binary strings A and B, each of length N.Chef can rearrange both the strings in any way. Find the maximum bitwise XOR he can achieve if he rearranges the strings optimally.



#include <bits/stdc++.h>
using namespace std;
int main() {
    int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        string a,b;
        cin>>a>>b;
        
        int n = a.size();
        int zeros = 0,ones = 0;
        for(int i = 0;i < n;i++){
            if(a[i] == '0') zeros++;
            else ones++;
        }
        
        for(int i = 0;i < n;i++){
            if(b[i] == '0') zeros++;
            else ones++;
        }
        
        int temp = min(zeros,ones);
        string ans = "";
        for(int i = 0;i < temp;i++) cout<<1;
        for(int i = temp;i < n;i++) cout<<0;
        cout<<endl;
    }
}