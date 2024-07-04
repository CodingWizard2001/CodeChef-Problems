// There are initially X people in a room. You are given an array A of length N which describes the following events:

// 1.  If Ai ≥ 0, then Ai people enter the room at i-th minute. 
// 2.  If Ai < 0, then |Ai| people leave the room at i-th minute. Here |Ai| denotes the absolute value of Ai.

// Determine the maximum number of people in the room at any moment of time. It is guaranteed in the input that at any moment of time, the number of people in the room does not become negative.



#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int len,initialPeople;

        // cout<<"Enter the length of the array : ";
        cin>>len;

        // cout<<"Enter the initial people already lived : ";
        cin>>initialPeople;

        int arr[len];
        for(int i = 0;i < len;i++){
            // cout<<"Enter the no. of people lived in at "<<(i + 1)<<"th position : ";
            cin>>arr[i];
        }

        int maxi = initialPeople;
        for(int i = 0;i < len;i++){
            initialPeople += arr[i];
            maxi = max(maxi,initialPeople);
        }
        cout<<maxi<<endl;
    }
}