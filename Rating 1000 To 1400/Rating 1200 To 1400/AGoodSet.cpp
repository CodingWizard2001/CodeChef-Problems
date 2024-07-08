// A set of integers is called good if there does not exist three distinct elements a, b, c in it such that a + b = c. Your task is simple. Just output any good set of n integers. All the elements in this set should be distinct and should lie between 1 and 500, both inclusive.



#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int num;
        // cout<<"Enter a number : ";
        cin>>num;
        
        for(int i = 1;i < (2 * num);i += 2){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}