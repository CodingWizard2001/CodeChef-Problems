// Chef is interested in the sum of GCDs of all prefixes of a permutation of the integers {1,2,…,N}. Formally, for a permutation P = [P1,P2,…,PN] of {1,2,…,N}, let us define a function Fi = gcd(A1,A2,A3,…,Ai). Chef is interested in the value of F1 + F2 +…+FN. Now, Chef wants to find a permutation of {1,2,…,N} which has the given sum equal to X. Please help Chef find one such permutation. In case there is no such permutation, print -1. In case of multiple answers, any of them will be accepted. A permutation of {1,2,…,N} is a sequence of numbers from 1 to N in which each number occurs exactly once.




#include <bits/stdc++.h>
using namespace std;

int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int n,x;
        cin>>n>>x;
        
        if(x < n) cout<<-1<<endl;
        else{
            cout<<(x - n + 1)<<" ";
            for(int i = 1;i <= n;i++){
                if(i != (x - n + 1)) cout<<i<<" ";
            }
            cout<<endl;
        }
    }
}