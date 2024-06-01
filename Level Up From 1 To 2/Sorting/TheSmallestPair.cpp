// You are given a sequence a1, a2, ..., aN. Find the smallest possible value of ai + aj,


#include <iostream>
#include <climits>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int lengthOfSequence;
        cout<<"Enter the length of sequence : ";
        cin>>lengthOfSequence;
        int arr[lengthOfSequence];

        for(int i = 0;i < lengthOfSequence;i++){
            cout<<"Enter the value for "<<(i + 1)<<"th car : ";
            cin>>arr[i];
        }

        int minimum = INT_MAX,secondMinimum = INT_MAX;
        for(int i = 0;i < lengthOfSequence;i++){
            if(minimum > arr[i]){
                secondMinimum = minimum;
                minimum = arr[i];
            }
            else if(arr[i] != minimum && arr[i] < secondMinimum) secondMinimum = arr[i];
        }

        cout<<"The smallest possible value will be : "<<(minimum + secondMinimum)<<endl;
    }
}