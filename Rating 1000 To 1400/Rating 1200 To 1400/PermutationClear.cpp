// Alice has an array A of length N which is initially a permutation. She dislikes K numbers which are B1,B2,…,BK all of which are distinct. Therefore, she removes all the occurrences of these numbers from A. The order of the remaining elements of the A does not change. Can you find out the resulting array A?




#include <bits/stdc++.h>
using namespace std;

int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int arrSize;
        // cout<<"Enter the size of the array : ";
        cin>>arrSize;
        
        int arr[arrSize];
        for(int i = 0;i < arrSize;i++) cin>>arr[i];
        
        int kSize;
        // cout<<"Enter the size of k : ";
        cin>>kSize;
        
        set<int>k;
        for(int i = 0;i < kSize;i++){
            int n;
            cin>>n;
            k.insert(n);
        }
        
        for(int i = 0;i < arrSize;i++){
            if(k.count(arr[i])) continue;
            else cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}