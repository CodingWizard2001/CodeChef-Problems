// You are given four integers a, b, c and d. Determine if there's a rectangle such that the lengths of its sides are a, b, c and d (in any order).



#include <bits/stdc++.h>
using namespace std;

int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int side1,side2,side3,side4;

        // cout<<"Enter the first side : ";
        cin>>side1;
        // cout<<"Enter the second side : ";
        cin>>side2;
        // cout<<"Enter the third side : ";
        cin>>side3;
        // cout<<"Enter the fourth side : ";
        cin>>side4;
        
        if((side1 ^ side2 ^ side3 ^ side4) == 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}