// You have a binary string S of length N. In one operation you can select a substring of S and reverse it. Find the minimum number of operations required to sort this binary string. It can be proven that the string can always be sorted using the above operation finite number of times.


#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int len;
        // cout<<"Enter the length of the string : ";
        cin>>len;
        string str;
        // cout<<"Enter the string : ";
        cin>>str;
        int count = 0;
        for(int i = 0;i < (len - 1);i++){
            if(str[i] == '1' && str[i + 1] == '0') count++;
        }
        cout<<count<<endl;
    }
}