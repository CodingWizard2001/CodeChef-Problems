// There are N seats in a row. You are given a string S with length N; for each valid i, the i-th character of S is '0' if the i-th seat is empty or '1' if there is someone sitting in that seat. Two people are friends if they are sitting next to each other. Two friends are always part of the same group of friends. Can you find the total number of groups?



#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        string s;
        // cout<<"Enter the binary string : ";
        cin>>s;
        int count = 0,add = 0;
        for(int i = 0;i < s.size();i++){
            if(s[i] == '1'){
                count++;
            }
            else{
                if(count > 0) add++;
                count = 0;
            }
        }
        if(count > 0) add++;
        cout<<add<<endl;
    }
}