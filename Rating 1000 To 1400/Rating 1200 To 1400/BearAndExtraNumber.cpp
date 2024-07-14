// A sequence is called nice if its elements are distinct consecutive numbers, possibly in changed order. Limak has a nice sequence. While he was in school today, someone inserted one extra number in the sequence. Limak has just returned and realized that the sequence isn't nice anymore! He wants to remove the inserted number and make his sequence nice again. Can you help him to find the number that he should remove? Formally, in each test case you are given a sequence of N numbers A1, A2, ..., AN. Your task is to find the value X, such that removing one occurrence of X would make the sequence nice. It's guaranteed that exactly one solution exists.




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
        for(int i = 0;i < size;i++) cin>>arr[i];
        
        sort(arr,arr + size);
        int bad;
        if (size >= 2 && arr[0] < arr[1] - 1) bad = arr[0];
        
        else if (size >= 2 && arr[size - 1] > arr[size - 2] + 1)  bad = arr[size - 1];
        
        else {
            for (int i = 1; i < size; i++) {
                if (arr[i] == arr[i-1]) {
                    bad = arr[i];
                    break;
                }
            }
        }
        cout << bad << endl;
    }
}