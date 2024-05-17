// Given a list of N contest codes, where each contest code is either START38 or LTIME108, help Chef count how many problems were featured in each of the contests.


#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int lengthOfString;
        cout<<"Enter the length of the string : ";
        cin>>lengthOfString;
        int countOfSTART38 = 0,countOfLTIME108 = 0;
        while(lengthOfString--){
            string str;
            cout<<"Enter the string : ";
            cin>>str;
            if(str == "START38") countOfSTART38++;
            else countOfLTIME108++;
        }
        cout<<"START38 : LTIME108 = "<<countOfSTART38<<" : "<<countOfLTIME108<<endl;
    }
}