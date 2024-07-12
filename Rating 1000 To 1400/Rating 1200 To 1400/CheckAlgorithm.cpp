// One day, Saeed was teaching a string compression algorithm. This algorithm finds all maximal substrings which contains only one character repeated one or more times (a substring is maximal if it we cannot add one character to its left or right without breaking this property) and replaces each such substring by the string "cK", where K is the length of the substring and c is the only character it contains. For example, "aabaaa" is compressed to "a2b1a3". Saeed wanted to check if the students understood the algorithm, so he wrote a string S on the board and asked the students if the algorithm is effective on S, i.e. if the string created by compressing S is strictly shorter than S. Help them answer this question.




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
        
        string ck = "";
        int count = 1;
        for(int i = 1;i < str.length();i++){
            if(str[i] == str[i - 1]) count++;
            else{
                ck += str[i - 1];
                ck += to_string(count);
                count = 1;
            }
        }
        ck += str[str.length() - 1];
        ck += to_string(count);
        
        if(ck.length() < str.length()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}