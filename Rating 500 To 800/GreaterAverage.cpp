// You are given 3 numbers A,B and C . Determine whether average of A and B is strictly greater than C.

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cout<<"Enter no. of test case : ";
    cin>>t;
    while(t){
        int A,B,C;
        cout<<"Enter the value of A : ";
        cin>>A;
        cout<<"Enter the value of B : ";
        cin>>B;
        cout<<"Enter the value of C : ";
        cin>>C;
        float result = (A + B) / 2.0;
        if(result > float(C)) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        t--;
    }
}