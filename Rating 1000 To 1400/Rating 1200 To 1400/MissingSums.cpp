// Given a positive integer N, construct an array A containing N distinct elements such that the sum of any two elements in the array (not necessarily different) is not present in the array. That is, there have to be no such i,j,k such that 1 ≤ i,j,k ≤ N & Ai + Aj = Ak. The elements of the array A should be in the range [1,10^5]. It is guaranteed that such an array always exists under given constraints.





#include <bits/stdc++.h>
using namespace std;

int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int n;
        cin>>n;
        for(int i = 1;i <= (n + n - 1);i += 2){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}