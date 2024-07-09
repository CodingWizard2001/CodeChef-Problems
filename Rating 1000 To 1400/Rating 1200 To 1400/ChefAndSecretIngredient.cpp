// Today Chef wants to evaluate the dishes of his N students. He asks each one to cook a dish and present it to him. Chef loves his secret ingredient, and only likes dishes with at least X grams of it. Given N, X and the amount of secret ingredient used by each student Ai, find out whether Chef will like at least one dish.



#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int len,xGramsWant;

        // cout<<"Enter the no. of students : ";
        cin>>len;

        // cout<<"Enter the minimum no. of ingredients : ";
        cin>>xGramsWant;

        int arr[len];
        for(int i = 0;i < len;i++) cin>>arr[i];
        
        bool flag = false;
        for(int i = 0;i < len;i++){
            if(arr[i] >= xGramsWant){
                flag = true;
                break;
            }
        }
        
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}