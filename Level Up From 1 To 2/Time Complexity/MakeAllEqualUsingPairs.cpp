// Chef has an array A of length N. In one operation, Chef can choose any two distinct indices i,j (1 ≤ i,j ≤ N,i != j) and either change Ai to Aj or change Aj to Ai.


#include <bits/stdc++.h>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int lengthOfArray;
        cout<<"Enter the length of the array : ";
        cin>>lengthOfArray;

        int arr[lengthOfArray];
        for(int i = 0;i < lengthOfArray;i++){
            cout<<"Enter the value of "<<(i + 1)<<"th position : ";
            cin>>arr[i];
        }

        int count = 1,maxi = 0;
        sort(arr,arr + lengthOfArray);
        for(int i = 0;i < (lengthOfArray - 1);i++){
            if(arr[i] == arr[i + 1]) count++;
            else count = 1;
            maxi = max(maxi,count);
        }

        cout<<"No. of changes are needed : "<<(lengthOfArray - count)<<endl;
    }
}