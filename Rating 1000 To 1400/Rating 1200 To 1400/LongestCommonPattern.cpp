// As we all know, Chef is cooking string for long days, his new discovery on string is the longest common pattern length. The longest common pattern length between two strings is the maximum number of characters that both strings have in common. Characters are case sensitive, that is, lower case and upper case characters are considered as different. Note that characters can repeat in a string and a character might have one or more occurrence in common between two strings. Chef wants to test you with the problem described above. He will give you two strings of Latin alphabets and digits, return him the longest common pattern length.



#include <bits/stdc++.h>
using namespace std;

int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        string a,b;
        cin>>a>>b;
        
        map<char,int>m,p;
        for(int i = 0;i < a.size();i++) m[a[i]]++;
        
        for(int i = 0;i < b.size();i++) p[b[i]]++;
        
        int count = 0;
        for(auto i : m){
            for(auto j : p){
                if(i.first == j.first){
                    count += min(i.second,j.second);
                }
            }
        }
        cout<<count<<endl;
    }
}