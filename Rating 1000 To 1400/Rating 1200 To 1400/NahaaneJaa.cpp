// Bapuji is furious with Jethiya because he did not bathe before eating. Jethiya does not want to bathe right now, but in order to do so, he must first establish his innocence to Bapuji. Bapuji gives Jethiya a problem, and if Jethiya solves it, Bapuji will allow him to eat his food before taking a bath. Jethiya asks for your help to solve the problem. You are given an array A of size N and an integer K. You can perform the following operation on the given array any number of times (possibly zero):

// 1.  Choose two integers L and R (1 ≤ L ≤ R ≤ N)

// 2.  Then, for each i such that L ≤ i ≤ R, set Ai to A⌊(l + r )/ 2 ⌋. Here, ⌊ ⌋ denotes the floor function.

// 3.  That is, apply the following to the subarray [L,R]:

//     a.  If this subarray has odd length, set all its elements to be equal to the middle element.
    
//     b.  If it has even length, set all its elements to be equal to the left one among the two middle elements.

// Is it possible to make all the array elements equal to K after performing some number of operations?




#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        long long n,k;
        cin>>n>>k;
        
        int arr[n];
        for(int i = 0;i < n;i++) cin>>arr[i];
        
        vector<int>v;
        
        if(n == 1 && arr[0] == k) cout<<"YES"<<endl;
        else{
            for(int i = 0;i < n;i++){
                if(arr[i] == k) v.push_back(i);
            }
            if(v.size() != 0){
                if(v[0] != (n - 1)) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
            else cout<<"NO"<<endl;
        }
    }
}