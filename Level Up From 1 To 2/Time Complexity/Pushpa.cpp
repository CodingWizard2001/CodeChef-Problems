// Pushpa has entered Chefland and wants to establish Pushpa-Raj here too. Chefland has N towers where the height of the ith tower is Hi. To establish Pushpa-Raj, Pushpa does the following: 

// 1.  Initially, Pushpa chooses any tower i (1 ≤ i ≤ N) and lands on the roof of that tower.
// 2.  Let X denote the height of the tower Pushpa is currently on, then, Pushpa can land on the roof of any tower (1 ≤ j ≤ N) such that the height of the jth tower is (X+1).

// Let i denote the index of the tower on which Pushpa lands, then, the height of all towers except tower i increases by 1 after each jump including the initial jump. To establish Pushpa-Raj, Pushpa wants to land at the maximum height possible. Determine the maximum height Pushpa can reach.



#include <bits/stdc++.h>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int lengthOfArray;
        cout<<"Enter the length of array : ";
        cin>>lengthOfArray;

        int arr[lengthOfArray];
        map<int,int>mp;
        for(int i = 0;i < lengthOfArray;i++){
            cout<<"Enter the value for "<<(i + 1)<<"th position : ";
            cin>>arr[i];
            mp[arr[i]]++;
        }

        int sum = 0;
        for(auto idx : mp){
            sum = max(sum,(idx.first + (idx.second - 1)));
        }

        cout<<"The maximum height Pushpa can reach will be : "<<sum<<endl;
    }
}