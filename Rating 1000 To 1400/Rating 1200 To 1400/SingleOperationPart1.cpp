// Chef has the binary representation S of a number X with him. He can modify the number by applying the following operation exactly once: Make X:=X⊕⌊ X / Y2 ⌋, where (1 ≤ Y ≤ ∣S∣) and ⊕ denotes the bitwise XOR operation. Chef wants to maximize the value of X after performing the operation. Help Chef in determining the value of Y which will maximize the value of X after the operation.



#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int num;
        // cout<<"Enter the number : ";
        cin>>num;

        string str;
        // cout<<"Enter the string : ";
        cin>>str;
        
        int count = 0;
        for(int i = 0;i < num;i++){
            if(str[i] == '0') break;
            count++;
        }
        cout<<count<<endl;
    }
}