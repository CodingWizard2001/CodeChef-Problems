// Chef has a number D containing only digits 0's and 1's. He wants to make the number to have all the digits same. For that, he will change exactly one digit, i.e. from 0 to 1 or from 1 to 0. If it is possible to make all digits equal (either all 0's or all 1's) by flipping exactly 1 digit then output "Yes", else print "No" (quotes for clarity)



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
        
        int countZero = 0,countOfOne = 0;
        for(int i = 0;i < str.size();i++){
            if(str[i] == '0') countZero++;
            else countOfOne++;
        }

        if(countOfOne == 1 || countZero == 1) cout<<"Yes"<<endl;

        else cout<<"No"<<endl;
    }
}