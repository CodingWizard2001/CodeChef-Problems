// Chef has a stick of length L. Chef wants to break the stick into K parts such that each part has a non-zero length. Let the lengths of the K parts be A1,A2,…,AK (Note that A1 + A2 +…+ AK = L and Ai is a positive integer for all i). Chef wants to minimize the value of  Under the given constraints it will always be possible to break the stick into K parts of non-zero lengths.


#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int length,noOfBreak;
        // cout<<"Enter the length of the stick : ";
        cin>>length;
        
        // cout<<"Enter the no. of break the stick : ";
        cin>>noOfBreak;

        if(length % noOfBreak == 0) cout<<0<<endl;
        else cout<<1<<endl;
    }
}