// Chef is attending math classes. On each day, the teacher gives him homework. Yesterday, the teacher gave Chef a sequence of positive integers and asked him to find the maximum product of two different elements of this sequence. This homework was easy for Chef, since he knew that he should select the biggest two numbers. However, today, the homework is a little bit different. Again, Chef has a sequence of positive integers A1,A2,…,AN, but he should find two different elements of this sequence such that the sum of digits (in base 10) of their product is maximum possible. Chef thought, mistakenly, that he can still select the two largest elements and compute the sum of digits of their product. Show him that he is wrong by finding the correct answer ― the maximum possible sum of digits of a product of two different elements of the sequence A.



#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int len;
        // cout<<"Enter the length of string : ";
        cin>>len;
        int arr[len];
        for(int i = 0;i < len;i++){
            // cout<<"Enter the value at "<<(i + 1)<<"th position : ";
            cin>>arr[i];
        }
        
        int sum,maxSum = 0;
        for(int i = 0;i < len;i++){
            for(int j = (i + 1);j < len;j++){
                sum = 0;
                int product = arr[i] * arr[j];
                while(product != 0){
                    int digit = (product % 10);
                    sum += digit;
                    product /= 10;
                }
                maxSum = max(maxSum,sum);
            }
        }
        cout<<maxSum<<endl;
    }
}