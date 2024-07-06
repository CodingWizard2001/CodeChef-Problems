// Sardar Singh has many men fighting for him, and he would like to calculate the power of each of them to better plan for his fight against Ramadhir. The power of a string S of lowercase English alphabets is defined to be where ord(Si) is the position of Si in the alphabet, i.e, ord('a')=1,ord('b')=2,…,ord('z')=26. Each of Sardar Singh's men has a name consisting of lowercase English alphabets. The power of a man is defined to be the maximum power over all possible rearrangements of this string. Find the power of each of Sardar Singh's men.




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
        int sum = 0;
        int n = str.size();
        sort(str.begin(),str.end());

        for(int i = 0;i < n;i++) sum += (i + 1) * ((str[i] - 'a') + 1);

        cout<<sum<<endl;
    }
}