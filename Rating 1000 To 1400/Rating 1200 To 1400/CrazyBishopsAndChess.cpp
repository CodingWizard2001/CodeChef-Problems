// Chef has a matrix of size N x N. There are N bishops placed on the matrix, in a zig-zag fashion, at the cells (1,1),(2,2),(1,3),(2,4),(1,5),…, and so on.




#include <bits/stdc++.h>
using namespace std;

int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int n;
        cin>>n;
        if(n == 1) cout<<0<<endl;
        else cout<<((2 * n) - (n / 2) - 3)<<endl;
    }
}