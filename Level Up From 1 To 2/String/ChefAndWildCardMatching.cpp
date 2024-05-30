// Chef wants to implement wildcard pattern matching supporting only the wildcard '?'. The wildcard character '?' can be substituted by any single lower case English letter for matching. He has two strings X and Y of equal length, made up of lower case letters and the character '?'. He wants to know whether the strings X and Y can be matched or not.


#include <iostream>
#include <string>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        string x,y;
        cout<<"Enter string X : ";
        cin>>x;

        cout<<"Enter string Y : ";
        cin>>y;

        bool flag = true;
        for(int i = 0;i < x.length();i++){
            if(x[i] == '?' && y[i] != '?') x[i] = y[i];
            else if(x[i] != '?' && y[i] == '?') y[i] = x[i];
            else if(x[i] != y[i]){
                flag = false;
                break;
            }
        }

        if(flag == false) cout<<"No, 2 string don't match with each other"<<endl;
        else cout<<"Yes, 2 string match with each other"<<endl;
    }
}