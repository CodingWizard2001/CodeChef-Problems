// You are given a range of integers {L,L+1,…,R}. An integer X is said to be reachable if it can be represented as a sum of two not necessarily distinct integers in this range. Find the number of distinct reachable integers.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int left,right;
        cout<<"Enter the value of left : ";
        cin>>left;

        cout<<"Enter the value of right : ";
        cin>>right;

        if(left == right) cout<<"The number of distinct reachable integers will be : "<<1<<endl;
        else cout<<"The number of distinct reachable integers will be : "<<2 * (right -  left) + 1<<endl;
    }
}