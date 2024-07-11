// The greatest common divisor (GCD) of a sequence is the greatest positive integer which divides each element of this sequence. You are given a sequence A of positive integers with size N. You are allowed to delete up to N - 1 elements from this sequence. (I.e., you may delete any number of elements, including zero, as long as the resulting sequence is non-empty.) Please find the minimum number of elements which have to be deleted so that the GCD of the resulting sequence would be equal to 1, or determine that it is impossible.



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
        
        int gcd = arr[0];
        for(int i = 1;i < len;i++) gcd = __gcd(gcd,arr[i]);
        
        if(gcd == 1) cout<<0<<endl;
        else cout<<-1<<endl;
    }
}