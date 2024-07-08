// In the ROT-K cipher, each character in the string is shifted a fixed number of positions down the alphabet. The value of K represents the number of positions to shift. For instance, in ROT-2, each character is shifted 2 positions. The ROT-2 cipher of the string code is eqfg.Note that the rotation is performed in a circular manner, meaning that if the character z is shifted by one position, we obtain the character a. You are given strings S,T, and U, each of length N, such that the ROT-K cipher of string S is string T. Find the ROT-K cipher of string U.




#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int len;
        // cout<<"Enter the length : ";
        cin>>len;

        string s,t,u;

        // cout<<"Enter the string S : ";
        cin>>s;

        // cout<<"Enter the string T : ";
        cin>>t;
        
        // cout<<"Enter the string U : ";
        cin>>u;
        
        int diff = (t[0] - s[0] + 26) % 26;
        string w = "";
        for(int i = 0;i < len;i++){
            w += (u[i] - 'a' + diff) % 26 + 'a';
        }
        cout<<w<<endl;
    }
}