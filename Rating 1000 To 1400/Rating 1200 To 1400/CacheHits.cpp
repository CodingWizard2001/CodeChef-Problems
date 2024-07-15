// Chef has a memory machine. It has one layer for data storage and another layer for cache. Chef has stored an array with length N in the first layer; let's denote its elements by A0,A1,…,AN-1. Now he wants to load some elements of this array into the cache. The machine loads the array in blocks with size B: A0,A1,…,AB-1 from a block AB,AB+1,...,A2B - 1 form another block, and so on. The last block may contain less than B elements of Chef's array. The cache may only contain at most one block at a time. Whenever Chef tries to access an element Ai, the machine checks if the block where Ai is located is already in the cache, and if it is not, loads this block into the cache layer, so that it can quickly access any data in it. However, as soon as Chef tries to access any element that is outside the block currently loaded in the cache, the block that was previously loaded into the cache is removed from the cache, since the machine loads a new block containing the element that is being accessed. Chef has a sequence of elements Ax1,Ax2,....,Axm which he wants to access, in this order. Initially, the cache is empty. Chef is wondering how many times the machine will need to load a block into the cache layer. Can you help him calculate this number?




#include <bits/stdc++.h>
using namespace std;

int main() {
    int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int n,b,m;
        cin>>n>>b>>m;
        
        int arr[m];
        for(int i = 0;i < m;i++) cin>>arr[i];
        
        int x = arr[0] / b;
        int ans = 1;
        for(int i = 1;i < m;i++){
            if((arr[i] / b) != x){
                ans++;
                x = arr[i] / b;
            }
        }
        cout<<ans<<endl;
    }
}