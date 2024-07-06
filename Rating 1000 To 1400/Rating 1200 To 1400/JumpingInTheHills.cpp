// There are N hills in a row numbered 1 through N from left to right. Each hill has a height; for each valid i, the height of the i-th hill is Hi. Chef is initially on the leftmost hill (hill number 1). He can make an arbitrary number of jumps (including zero) as long as the following conditions are satisfied:

// 1.  Chef can only jump from each hill to the next hill, i.e. from the i-th hill, he can jump to the i+1-th hill (if it exists).
// 2.  It's always possible to jump to a hill with the same height as the current hill.
// 3.  It's possible to jump to a taller hill if it's higher than the current hill by no more than U.
// 4.  It's possible to jump to a lower hill if it's lower than the current hill by no more than D.
// 5.  Chef can use a parachute and jump to a lower hill regardless of its height (as long as it's lower than the current hill). This jump can only be performed at most once.

// Chef would like to move as far right as possible. Determine the index of the rightmost hill Chef can reach.




#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int len,highJump,lessJump;

        // cout<<"Enter the length : ";
        cin>>len;

        // cout<<"Enter the maximum jump he can make : ";
        cin>>highJump;
        
        // cout<<"Enter the minimum jump he can make : ";
        cin>>lessJump;

        int parachute = 1;
        int count = 1;
        int arr[len];
        for(int i = 0;i < len;i++) cin>>arr[i];

        for(int i = 0;i < (len - 1);i++){
            if(arr[i] == arr[i + 1]) count++;

            else if((arr[i] > arr[i + 1]) && (arr[i] - arr[i + 1]) <= lessJump) count++;

            else if((arr[i + 1] > arr[i]) && (arr[i + 1] - arr[i]) <= highJump) count++;

            else if((arr[i] > arr[i + 1]) && parachute == 1){
                parachute--;
                count++;
            }

            else break;
        }
        cout<<count<<endl;
    }
}