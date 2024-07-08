// Sergey recently learned about country codes - two letter strings, denoting countries. For example, BY stands for Belarus and IN stands for India. Mesmerized by this new discovery, Sergey now looks for country codes everywhere! Sergey has recently found a string S consisting of uppercase Latin letters. He wants to find the number of different country codes that appear in S as contiguous substrings. For the purpose of this problem, consider that every 2-letter uppercase string is a valid country code.




#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        string str;
        // cout<<"Enter the string : ";
        cin>>str;

        int len = str.length();
        set<string>ans;
        
        for(int i = 0;i < (len - 1);i++){
            string s = str.substr(i,2);
            ans.insert(s);
        }
        cout<<ans.size()<<endl;
    }
}