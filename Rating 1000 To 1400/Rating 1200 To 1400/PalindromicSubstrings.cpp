// Chef likes strings a lot but he likes palindromic strings more. Today, Chef has two strings A and B, each consisting of lower case alphabets. Chef is eager to know whether it is possible to choose some non empty strings s1 and s2 where s1 is a substring of A, s2 is a substring of B such that s1 + s2 is a palindromic string. Here '+' denotes the concatenation between the strings.



#include <bits/stdc++.h>
using namespace std;

int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        string a,b;

        // cout<<"Enter first string : ";
        cin>>a;

        // cout<<"Enter second string : ";
        cin>>b;

        int check = false;
        for(int i = 0;i < a.size();i++){
            if(b.find(a[i]) != -1){
                check = true;
                break;
            }
        }

        if(check) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}