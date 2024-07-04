// Chef is given a binary string A of length N. He can perform the following operation on A any number of times: Choose L and R (1 ≤ L ≤ R ≤ N), such that, in the substring A[L,R], the number of 1s is equal to the number of 0s and reverse the substring A[L,R]. Find the lexicographically smallest string that Chef can obtain after performing the above operation any (possibly zero) number of times on A. String X is lexicographically smaller than string Y, if either of the following satisfies:

// 1.  X is a prefix of Y and X ≠ Y.

// 2.  There exists an index i such that Xi < Yi and Xj = Yj ∀j such that 1 ≤ j < i.



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

        string str;
        // cout<<"Enter the string : ";
        cin>>str;
        
        int left = 0,right = (len - 1);
        while(left < right){
            if(str[left] == '0') left++;
            if(str[right] == '1') right--;
            else if(str[left] == '1' && str[right] == '0'){
                swap(str[left],str[right]);
                left++;
                right--;
            }
        }
        cout<<str<<endl;
    }
}