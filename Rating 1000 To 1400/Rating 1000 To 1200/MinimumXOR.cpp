// You have N integers - A1,A2,…,AN. You have to make the Bitwise XOR of all the elements as minimum as possible. You are allowed to remove at most one element. Note that this means that you can also choose to not remove any element. What is the final minimum XOR that you can achieve after removing at most one element?



#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int len;
        // cout<<"Enter the length : ";
        cin>>len;
        int arr[len];

        for(int i = 0;i < len;i++){
            // cout<<"Enter the value at "<<(i + 1)<<"th position : ";
            cin>>arr[i];
        }

        // First doing XOR operation to all the elements
        int result = 0;
        for(int i = 0;i < len;i++){
            result = result ^ arr[i];
        }

        // Then find which element have to remove
        int final = result,temp;
	    for(int i = 0;i < len;i++){
	        temp = result ^ arr[i];
	        final = min(final,temp);
	    }
        cout<<final<<endl;
    }
}