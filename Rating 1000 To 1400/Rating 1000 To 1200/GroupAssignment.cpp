// Chef is hosting a party at his house and N people are invited to it. Everyone has arrived and they are eager to make a group and chit-chat. The ith person prefers to be in a group of exactly Pi people (including himself). A person who is not in a group of preferred size gets upset. Find whether Chef would be able to assign every person to a group such that everyone remains happy.


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
        vector<int>arr(len);
        vector<int>count(len + 1,0);
        for(int i = 0;i < len;i++){
            // cout<<"Enter the value at "<<(i + 1)<<"th position : ";
            cin>>arr[i];
            count[arr[i]]++;
        }

        bool happy = true;
        for(int i = 1;i <= len;i++){
            if(count[i] % i != 0){
                happy = false;
                break;
            }
        }
        cout<<(happy ? "YES" : "NO") <<endl;
    }
}