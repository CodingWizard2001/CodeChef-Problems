// Chef is playing a game on a sequence of N positive integers, say A1, A2, ... AN. The game is played as follows.

// 1.  If all the numbers are equal, the game ends.

// 2.  Otherwise select two numbers which are unequal

// 3.  Subtract the smaller number from the larger number

// 4.  Replace the larger number with the result from above (see the explanation section for clarity)

// Chef has already figured out that the game always terminates. He also knows, for a given sequence of integers, the game will always terminate on the same value, no matter how the game is played. Chef wants you to simulate the game for him and tell him on which value will the game terminate for a given sequence of integers.




#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int len;
        // cout<<"Enter the length of the array : ";
        cin>>len;
        
        int arr[len];
        for(int i = 0;i < len;i++){
            // cout<<"Enter the value for "<<(i + 1)<<"th position : ";
            cin>>arr[i];
        }
        
        int ans = arr[0];
        for(int i = 0;i < len;i++) ans = __gcd(ans,arr[i]);
        
        cout<<ans<<endl;
    }
}