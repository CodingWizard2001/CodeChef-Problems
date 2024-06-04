// Chef wants to impress Chefina by giving her the maximum number of gifts possible. Chef is in a gift shop having N items where the cost of the ith item is equal to Ai. Chef has K amount of money and a 50% off discount coupon that he can use for at most one of the items he buys. If the cost of an item is equal to X, then, after applying the coupon on that item, Chef only has to pay [x / 2] (rounded up to the nearest integer) amount for that item. Help Chef find the maximum number of items he can buy with K amount of money and a 50% discount coupon given that he can use the coupon on at most one item.


#include <bits/stdc++.h>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfItems,amountOfMoney;
        cout<<"Enter the no. of items : ";
        cin>>noOfItems;

        cout<<"Enter the money Chef have : ";
        cin>>amountOfMoney;

        int arr[noOfItems];
        for(int i = 0;i < noOfItems;i++){
            cout<<"Enter the price of "<<(i + 1)<<"th items : ";
            cin>>arr[i];
        }

        sort(arr,arr + noOfItems);
        int count = 0;
        for(int i = 0;i < noOfItems;i++){
            if(amountOfMoney >= arr[i]){
                amountOfMoney = amountOfMoney - arr[i];
                count++;
            }
            else{
                if(amountOfMoney >= (arr[i] + 1) / 2){
                    count++;
                    break;
                }
            }
        }
        cout<<"The maximum number of items he can buy will be : "<<count<<endl;
    }
}