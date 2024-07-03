// In order to establish dominance amongst his friends, Chef has decided that he will only walk in large steps of length exactly K feet. However, this has presented many problems in Chef’s life because there are certain distances that he cannot traverse. Eg. If his step length is 5 feet, he cannot travel a distance of 12 feet. Chef has a strict travel plan that he follows on most days, but now he is worried that some of those distances may become impossible to travel. Given N distances, tell Chef which ones he cannot travel.



#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;

    while(testCase--){
        int len,stepsLength;
        // cout<<"Enter the length of the array : ";
        cin>>len;

        // cout<<"Enter the length of steps : ";
        cin>>stepsLength;

        int arr[len];
        for(int i = 0;i < len;i++){
            // cout<<"Enter the no. of goals made by <<(i + 1)<<"th player : ";
            cin>>arr[i];
        }
        string ans = "";
        for(int i = 0;i < len;i++){
            if(arr[i] % stepsLength == 0) ans += '1';
            else ans += '0';
        }

        
        cout<<ans<<endl;
    }
}