// Given an alphanumeric string made up of digits and lower case Latin characters only, find the sum of all the digit characters in the string.


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
        for(int i = 0;i < str.length();i++){
            if(str[i] >= '1' && str[i] <= '9') sum += int(str[i] - '0');
        }

        cout<<sum<<endl;
    }
}