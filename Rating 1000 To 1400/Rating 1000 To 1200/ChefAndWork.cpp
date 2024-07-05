// Chef has N small boxes arranged on a line from 1 to N. For each valid i, the weight of the i-th box is Wi. Chef wants to bring them to his home, which is at the position 0. He can hold any number of boxes at the same time; however, the total weight of the boxes he's holding must not exceed K at any time, and he can only pick the ith box if all the boxes between Chef's home and the ith box have been either moved or picked up in this trip. Therefore, Chef will pick up boxes and carry them home in one or more round trips. Find the smallest number of round trips he needs or determine that he cannot bring all boxes home.



#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfSmallBox,maximumWeight;

        // cout<<"Enter the no. of small box : ";
        cin>>noOfSmallBox;

        // cout<<"Enter the minimum weight he can pick : ";
        cin>>maximumWeight;
        int arr[noOfSmallBox];
        
        bool impossible = false;
        for(int i = 0;i < noOfSmallBox;i++){
            cin>>arr[i];
            if(arr[i] > maximumWeight) impossible = true;
        }
        
        if(impossible){
            cout<<-1<<endl;
            continue;
        }
        
        int count = 0,i = 0;
        while(i < noOfSmallBox){
            int sum = 0;
            while(i < noOfSmallBox && sum + arr[i] <= maximumWeight){
                sum += arr[i];
                i++;
            }
            count++;
        }
        cout<<count<<endl;
    }
}