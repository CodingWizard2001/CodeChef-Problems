// Believe nothing you hear, and only one half that you see On a Halloween evening, young Tim embarks on a candy-filled quest with his friends, dressed as ghouls and witches. There are N friends, initially the i-th of them has Ai candies. To truly savor the spooky spirit, Tim wishes for everyone to have an equal number of candies. To achieve this, he is armed with a magical operation which is as follows:

// 1.  First, Tim chooses two integers i and j (1 ≤ i,j ≤ N), denoting the indices of two of his friends.

// 2.  Next, he chooses an integer k that's at least 1, while also satisfying 2^k ≤Ai. That is, the inequality 2 ≤ 2^k ≤ Ai should hold.

// 3.  Finally, Tim takes away 2^k candies from friend i and gives them to the friend j. That is, their candy counts change to (Ai - 2^k) and (Aj + 2^k) respectively.

// Determine whether all of Tim's friends can have an equal number of candies in the end, after some (possibly zero) operations are performed.




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
        int count = 0;
        for(int i = 0;i < len;i++){
            cin>>arr[i];
            count += arr[i];
        }

        if(count % len != 0) cout<<"NO"<<endl;
        else{
            int res = (count / len);
            bool flag = true;
            
            for(int i = 0;i < len;i++){
                if(abs(arr[i] - res) % 2 != 0){
                    flag = false;
                    break;
                }
            }

            if(flag) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}