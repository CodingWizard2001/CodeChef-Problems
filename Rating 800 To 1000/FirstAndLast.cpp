// You are given an array A = [A1,A2,…,AN] of length N.You can right rotate it any number of times (possibly, zero). What is the maximum value of A1 + AN you can get?


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int length;

        cout<<"Enter the length of the array : ";
        cin>>length;

        int arr[length];

        for(int i = 0;i < length;i++){
            cout<<"Enter the input for A"<<(i + 1)<<" : ";
            cin>>arr[i];
        } 

        int sum = arr[0] + arr[length - 1];

        for(int i = 0;i < (length - 1);i++){
            int temp = arr[i] + arr[i + 1];
            sum = max(sum,temp);
        }

        cout<<"The maximum value will be : "<<sum<<endl;
    }
}