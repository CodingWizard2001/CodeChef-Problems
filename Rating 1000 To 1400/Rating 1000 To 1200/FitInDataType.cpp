// Chef wants to store some important numerical data on his personal computer. He is using a new data type that can store values only from 0 till N both inclusive. If this data type receives a value greater than N then it is cyclically converted to fit into the range 0 to N. Given X, the value chef wants to store in this new data type. Determine what will be the actual value in memory after storing X.



#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int valueOfA,valueOfB;

        // cout<<"Enter the value of A : ";
        cin>>valueOfA;
        // cout<<"Enter the value of B : ";
        cin>>valueOfB;

        cout<<(valueOfB % (valueOfA + 1))<<endl;
    }
}