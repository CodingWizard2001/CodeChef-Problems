// You are given an integer N. Find a permutation P = [P1,P2,…,PN] of the integers {1,2,…,N} such that sum of averages of all consecutive triplets is minimized. If multiple permutations are possible, print any of them.


#include <bits/stdc++.h>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int valueOfN;
        cout<<"Enter the value of N : ";
        cin>>valueOfN;

        vector<int>arr;
        arr.push_back(valueOfN - 1); 
        arr.push_back(valueOfN - 2);

        for(int i = 1;i < (valueOfN - 3);i++) arr.push_back(i);

        if(valueOfN > 3) arr.push_back(valueOfN - 3);
        arr.push_back(valueOfN);

        for(auto value : arr){
            cout<<value<<" ";
        }
        cout<<endl;
    }
}