// Using his tip-top physique, Kim has now climbed up the mountain where the base is located. Kim has found the door to the (supposedly) super secret base. Well, it is super secret, but obviously no match for Kim's talents. The door is guarded by a row of N buttons. Every button has a single number Ai written on it. Surprisingly, more than one button can have the same number on it. Kim recognizes this as Soum's VerySafe door, for which you need to press two buttons to enter the password. More importantly, the sum of the two numbers on the buttons you press must be odd. Kim can obviously break through this door easily, but he also wants to know how many different pairs of buttons he can pick in order to break through the door. Can you help Kim find the number of different pairs of buttons he can press to break through the door?




#include <bits/stdc++.h>
using namespace std;

int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int size;
        // cout<<"Enter the size of the array : ";
        cin>>size;
        
        int arr[size];
        long countOdd = 0,countEven = 0;
        for(int i = 0;i < size;i++){
            cin>>arr[i];
            if(arr[i] % 2 == 0) countEven++;
            else countOdd++;
        }
        
        cout<<(countOdd * countEven)<<endl;
    }
}