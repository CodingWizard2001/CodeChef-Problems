// You are given a sequence A1,A2,…,AN. Find the maximum value of the expression |Ax - Ay| + |Ay - Az| + |Az - Ax| over all triples of pairwise distinct valid indices(x,y,z).




#include <bits/stdc++.h>
using namespace std;

int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int len;
        // cout<<"Enter the length : ";
        cin>>len;
        
        int arr[len];
        for(int i = 0;i < len;i++) cin>>arr[i];
        
        long maxi = arr[0];
        long mini = arr[0];
        
        for(int i = 1;i < len;i++){
            if(maxi < arr[i]) maxi = arr[i];
            if(mini > arr[i]) mini = arr[i];
        }
        
        cout<<(2 * (maxi - mini))<<endl;
    }
}