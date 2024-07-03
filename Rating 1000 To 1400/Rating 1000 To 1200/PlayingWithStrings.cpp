// Chef usually likes to play cricket, but now, he is bored of playing it too much, so he is trying new games with strings. Chef's friend Dustin gave him binary strings S and R, each with length N, and told him to make them identical. However, unlike Dustin, Chef does not have any superpower and Dustin lets Chef perform only operations of one type: choose any pair of integers (i,j) such that 1 ≤ i,j ≤ N and swap the i-th and j-th character of S. He may perform any number of operations (including zero). For Chef, this is much harder than cricket and he is asking for your help. Tell him whether it is possible to change the string S to the target string R only using operations of the given type.


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

        string str1,str2;
        // cout<<"Enter the first string : ";
        cin>>str1;

        // cout<<"Enter the second string : ";
        cin>>str2;
        
        int countOneOf1st = 0,countOneOf2nd = 0;
        for(int i = 0;i < len;i++){
            if(str1[i] == '1') countOneOf1st++;
            if(str2[i] == '1') countOneOf2nd++;
        }
        
        if(countOneOf1st == countOneOf2nd) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}