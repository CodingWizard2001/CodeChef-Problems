// Chef is working on his swap-based sorting algorithm for strings. Given a string S of length N, he wants to know whether he can sort the string using his algorithm.According to the algorithm, one can perform the following operation on string S any number of times: Choose some index (1 ≤ i ≤ N) and swap the ith character from the front and the ith character from the back. More formally, choose an index i and swap Si and S(N+1−i). Help Chef find if it is possible to sort the string using any (possibly zero) number of operations.




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

        string s,a;
        // cout<<"Enter the string : ";
        cin>>s;
        a = s;
        sort(a.begin(),a.end());
        
        if(a == s) cout<<"Yes"<<endl;
        else{
            int i = 0,j = (len - 1);
            while(i < j){
                if(s[i] > s[j]) swap(s[i],s[j]);
                i++;
                j--;
            }
            if(a == s) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
}