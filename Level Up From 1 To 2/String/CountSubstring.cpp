// Given a string S consisting of only 1s and 0s, find the number of substrings which start and end both in 1.


#include <iostream>
#include <string>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int length;
        cout<<"Enter the length of the string : ";
        cin>>length;

        string s;
        cout<<"Enter the string : ";
        cin>>s;

        long ans = 0;
        for(int i = 0;i < length;i++){
            if(s[i] == '1') ans++;
        }

        long result = ((ans + 1) * ans) / 2;
        cout<<"The number of substrings which start and end both in 1 will be : "<<result<<endl;
    }
}