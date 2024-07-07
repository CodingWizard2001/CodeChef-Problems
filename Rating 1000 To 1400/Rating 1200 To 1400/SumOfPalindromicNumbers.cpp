// A number is called palindromic if its decimal representation is a palindrome. You are given a range, described by a pair of integers L and R. Find the sum of all palindromic numbers lying in the range [L, R], inclusive of both the extrema.



#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int l,r;
        cin>>l>>r;
        
        int sum = 0;
        for(int i = l;i <= r;i++){
            string str = to_string(i);
            string str1 = str;
            reverse(str.begin(),str.end());
            
            if(str1 == str) sum += stoi(str);
        }
        cout<<sum<<endl;
    }
}