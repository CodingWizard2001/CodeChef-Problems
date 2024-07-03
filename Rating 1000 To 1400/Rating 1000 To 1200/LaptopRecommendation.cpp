// Chef wants to buy a new laptop. However, he is confused about which laptop to buy out of 10 different laptops. He asks his N friends for their recommendation. The ith friend recommends the Chef to buy the Ai th laptop (1 ≤ Ai ≤ 10). Chef will buy the laptop which is recommended by maximum number of friends. Determine which laptop Chef buys. Print CONFUSED if there are multiple laptops having maximum number of recommendations.


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

        int count[11] = {0};
        int maxi = 0,ans = 0;
        for(int i = 0;i < len;i++){
            // cout<<"Enter the value at <<(i + 1)<<"th position : ";
            cin>>arr[i];
            count[arr[i]]++;
            if(maxi < count[arr[i]]){
                ans = arr[i];
                maxi = count[arr[i]];
            }
        }
        
        int repeat = -1;
        for(int i = 0;i < 11;i++){
            if(count[i] == maxi) repeat++;
        }
        if(repeat) cout<<"CONFUSED"<<endl; 
        else cout<<ans<<endl;
    }
}