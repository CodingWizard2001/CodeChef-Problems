// Chef has an array A of length N. Chef forms a binary array B of length N using the parity of the sums of adjacent elements in A. Formally,

// 1.  Bi = (Ai + Ai+1) % 2 for 1 < i < (N - 1)
// 2.  Bi = (An + A1) % 2

// Here x % y denotes the remainder obtained when x is divided by y. Chef lost the array A and needs your help. Given array B, determine whether there exists any valid array A which could have formed B.



#include <bits/stdc++.h>
using namespace std;
int main() {
    int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int size;
        // cout<<"Enter the size of the array : ";
        cin>>size;
        int count = 0;
        int arr[size];
        for(int i = 0;i < size;i++){
            // cout<<"Enter the value for "<<(i + 1)<<"th position : ";
            cin>>arr[i];
            count += arr[i];
        }
        if(count % 2 == 0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}



// Output: 3             |
//         2             |
//         0 0           |     Yes
//         2             |
//         0 1           |     No
//         4             |
//         1 0 1 0       |     Yes