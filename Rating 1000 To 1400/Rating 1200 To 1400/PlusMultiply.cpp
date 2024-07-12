// Chef has a sequence A1,A2,…,AN. He needs to find the number of pairs (i,j) (1 ≤ i < j ≤ N) such that Ai + Aj = Ai ⋅ Aj. However, he is busy, so he asks for your help.



#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int n;
        cin>>n;
        
        int arr[n];
        int count0 = 0,count2 = 0;
        for(int i = 0;i < n;i++){
            // cout<<"Enter the value for "<<(i + 1)<<"th position : ";
            cin>>arr[i];
            if(arr[i] == 0) count0++;
            else if(arr[i] == 2) count2++;
        }

        int result = ((count0 - 1) * count0) / 2 + ((count2 - 1) * count2) / 2;
        
        cout<<result<<endl;
    }
}