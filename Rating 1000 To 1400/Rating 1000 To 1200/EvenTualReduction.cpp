// You are given a string S with length N. You may perform the following operation any number of times: choose a non-empty substring of S (possibly the whole string S) such that each character occurs an even number of times in this substring and erase this substring from S. (The parts of S before and after the erased substring are concatenated and the next operation is performed on this shorter string.) Is it possible to erase the whole string using one or more operations?


#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int size,temp;
        // cout<<"Enter the size of the string : ";
        cin>>size;
        string str;
        // cout<<"Enter the string : ";
        cin>>str;
        string ans = "YES";
        if(size % 2 != 0) cout<<"NO"<<endl;
        else{
            for(int i = 0;i < size;i++){
                temp = count(str.begin(),str.end(),str[i]);
                if(temp % 2 != 0) ans = "NO";
            }
            cout<<ans<<endl;
        }
    }
}