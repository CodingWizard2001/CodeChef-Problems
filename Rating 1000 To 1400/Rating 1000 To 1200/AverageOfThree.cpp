// It is Chef's birthday. You know that Chef's favourite number is X. You also know that Chef loves averages. Therefore you decide it's best to gift Chef 3 integers A1,A2,A3, such that:

// 1.  The mean of A1,A2 and A3 is X.

// 2.  1 <= A1,A2,A3 <= 1000

// 3.  A1,A2,A3 are distinct

// Output any suitable A1,A2 and A3 which you could gift to Chef.




#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int valueOfX;
        // cout<<"Enter the value of X : ";
        cin>>valueOfX;
        
        cout<<(valueOfX - 1)<<" "<<valueOfX<<" "<<(valueOfX + 1)<<endl;
    }
}