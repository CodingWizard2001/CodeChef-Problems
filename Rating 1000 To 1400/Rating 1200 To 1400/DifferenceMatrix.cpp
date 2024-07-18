// You are given an integer N. You need to find an N x N matrix such that:

// 1.  Each element of the matrix is an integer from 1 to N ^ 2;

// 2.  All elements of the matrix are unique;
// 3.  The absolute difference between elements in neighboring cells is strictly greater than 1.

// It can be shown that there is at least one matrix that satisfies the given conditions. If multiple matrices satisfy the given conditions, print any.





#include <bits/stdc++.h>
using namespace std;

int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int n;
        cin>>n;
        
        int c = 1,d = 2,e = (n * n);
        for(int i = 0;i < n;i++){
            for(int j = 0;j < n;j++){
                if(c <= e){
                    cout<<c<<" ";
                    c += 2;
                }
                else{
                    cout<<d<<" ";
                    d += 2;
                }
            }
            cout<<endl;
        }
    }
}