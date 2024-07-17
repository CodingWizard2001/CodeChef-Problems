// The correct way of evaluating an expression with *,+ and - is, first multiplication, then addition, and then subtraction. You are given integers N and X. Your task is to generate a string S of length N consisting only of *,+ and - such that when these N operators are placed in order between (N+1) ones, the result of the expression becomes X. If multiple such strings exist, print any of them. If no such string exists, print -1 instead.





#include <bits/stdc++.h>
using namespace std;

int main() {
    int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int n,x;
        cin>>n>>x;
        if(x > (n + 1) || (x < (1 - n))) cout<<-1<<endl;
        else{
            string s;
            if(x > 0) s = string(n - x + 1,'*') + string(x - 1,'+');
            else{
                x = -x;
                s = string(x + 1,'-') + string(n - x - 1,'*');
            }
            cout<<s<<endl;
        }
    }
}