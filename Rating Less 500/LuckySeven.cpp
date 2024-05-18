// Chef considers the number 7 lucky. As a result, he believes that the 7-th letter he sees on a day is his lucky letter of the day. You are given a string S of length 10, denoting the first 10 letters Chef saw today.What is Chef's lucky letter?

#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string : ";
    cin>>str;
    cout<<"The 7th character of "<<str<<" is : "<<str[6]<<endl;
}