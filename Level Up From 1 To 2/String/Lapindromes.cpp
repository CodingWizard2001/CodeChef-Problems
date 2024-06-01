// Lapindrome is defined as a string which when split in the middle, gives two halves having the same characters and same frequency of each character. If there are odd number of characters in the string, we ignore the middle character and check for lapindrome.  The two halves contain the same characters but their frequencies do not match. Your task is simple. Given a string, you need to tell if it is a lapindrome.


#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool isLapindrome(string str){
    int n = str.length();
    vector<char>leftSide(26,0);
    vector<char>rightSide(26,0);

    for(int i = 0;i < n / 2;i++) leftSide[str[i] - 'a']++;
    for(int i = (n + 1) / 2;i < n;i++) rightSide[str[i] - 'a']++;

    return leftSide == rightSide;
}
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        string str;
        cout<<"Enter the string  : ";
        cin>>str;
        if(isLapindrome(str)) cout<<"Yes, "<<str<<" is lapindrome in nature"<<endl;
        else cout<<"No, "<<str<<" is not lapindrome in nature"<<endl;
    }
}