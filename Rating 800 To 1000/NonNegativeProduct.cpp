// Alice has an array of N integers — A1,A2,…,AN. She wants the product of all the elements of the array to be a non-negative integer. That is, it can be either 0 or positive. But she doesn't want it to be negative. To do this, she is willing to remove some elements of the array. Determine the minimum number of elements that she will have to remove to make the product of the array's elements non-negative.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int length;

        cout<<"Enter the length of the size : ";
        cin>>length;

        int arr[length];

        for(int i = 0;i < length;i++){
            cout<<"Enter the value at "<<i<<"th index : ";
            cin>>arr[i];
        }

        int noOfNegativeNumber = 0,noOfZero = 0;

        for(int i = 0;i < length;i++){
            if(arr[i] < 0) noOfNegativeNumber++;
            else if(arr[i] == 0) noOfZero++;
        }

        if((noOfNegativeNumber % 2 != 0) && noOfZero == 0) cout<<"The minimum number of elements that she will have to remove to make the product of the array's elements non-negative will be : 1"<<endl;

        else cout<<"The minimum number of elements that she will have to remove to make the product of the array's elements non-negative will be : 0"<<endl;
    }
}