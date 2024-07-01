// Chef has found two very old sheets of paper, each of which originally contained a string of lowercase Latin letters. The strings on both the sheets have equal lengths. However, since the sheets are very old, some letters have become unreadable. Chef would like to estimate the difference between these strings. Let's assume that the first string is named S1, and the second S2. The unreadable symbols are specified with the question mark symbol '?'. The difference between the strings equals to the number of positions i, such that S1i is not equal to S2i, where S1i and S2i denote the symbol at the i the position in S1 and S2, respectively. Chef would like to know the minimal and the maximal difference between the two strings, if he changes all unreadable symbols to lowercase Latin letters. Now that you're fully aware of Chef's programming expertise, you might have guessed that he needs you help solving this problem as well. Go on, help him!


#include <bits/stdc++.h>
using namespace std;

int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        string s1,s2;
        // cout<<"Enter first string : ";
        cin>>s1;
        // cout<<"Enter second string : ";
        cin>>s2;
        int min = 0,max = 0;
        int size = s1.length();
        for(int i = 0;i < size;i++){
            if(s1[i] != '?' && s2[i] != '?' && s1[i] != s2[i]){
                min++;
                max++;
            }
            else if((s1[i] == '?' && s2[i] != '?') || (s1[i] != '?' && s2[i] == '?')) max++;
            else if(s1[i] == '?' && s2[i] == '?') max++;
        }
        cout<<min<<" "<<max<<endl;
    }
}