// Today, Chef decided to cook some delicious meals from the ingredients in his kitchen. There are N ingredients, represented by strings S1,S2,…,SN. Chef took all the ingredients, put them into a cauldron and mixed them up. In the cauldron, the letters of the strings representing the ingredients completely mixed, so each letter appears in the cauldron as many times as it appeared in all the strings in total; now, any number of times, Chef can take one letter out of the cauldron (if this letter appears in the cauldron multiple times, it can be taken out that many times) and use it in a meal. A complete meal is the string "codechef". Help Chef find the maximum number of complete meals he can make!



#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int len;
        // cout<<"Enter the no. of string : ";
        cin>>len;

        unordered_map<char,int>count;
        while(len--){
            string str;
            // cout<<"Enter the string : ";
            cin>>str;

            for(int i = 0;i < str.size();i++){
                count[str[i]]++;
            }
        }

        cout<<min({count['c'] / 2,count['o'],count['d'],count['e'] / 2,count['h'],count['f']})<<endl;
    }
}