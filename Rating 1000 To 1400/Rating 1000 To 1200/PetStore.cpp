// Alice and Bob went to a pet store. There are N animals in the store where the ith animal is of type Ai. Alice decides to buy some of these N animals. Bob decides that he will buy all the animals left in the store after Alice has made the purchase. Find out whether it is possible that Alice and Bob end up with exactly same multiset of animals.


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
        for(int i = 0;i < len;i++) cin>>arr[i];
        
        int check = 0;
        sort(arr,arr + len);

        for(int i = 0;i < len;i+=2){
            if(arr[i] != arr[i + 1]){
                check = 1;
                break;
            }
        }
        
        if(check) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
}