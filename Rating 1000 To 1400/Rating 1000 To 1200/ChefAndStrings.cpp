// Having already mastered cooking, Chef has now decided to learn how to play the guitar. Often while trying to play a song, Chef has to skip several strings to reach the string he has to pluck. Eg. he may have to pluck the 1st string and then the 6th string. This is easy in guitars with only 6 strings; However, Chef is playing a guitar with 10^6 strings. In order to simplify his task, Chef wants you to write a program that will tell him the total number of strings he has to skip while playing his favourite song.


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
            // cout<<"Enter the problem number: ";
            cin>>arr[i];
        }
        long long sum = 0;
        for(int i = 0;i< (len - 1);i++){
            sum += (abs(arr[i] - arr[i + 1]) - 1);
        }
        cout<<sum<<endl;
    }
}