// You are given a string S of length N. Your task is to delete a subsequence of maximum length from the string, such that, after concatenating the remaining parts of the string, it becomes a palindrome of length greater than 1. If this is possible, print the maximum length of the subsequence that can be deleted. Otherwise, print -1.


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
        int flag = 0;
        sort(str.begin(),str.end());
        for(int i = 1;i < str.size();i++){
            if(str[i] == str[i - 1]) flag = 1;
        }
        if(flag) cout<<(len - 2)<<endl;
        else cout<<-1<<endl;
    }
}