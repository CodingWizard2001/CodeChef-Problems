// Chef has X coins worth 1 rupee each and Y coins worth 2 rupees each. He wants to distribute all of these X + Y coins to his two sons so that the total value of coins received by each of them is the same. Find out whether Chef will be able to do so.




#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int oneRupee,twoRupee;

        // cout<<"Enter the no. of one rupee : ";
        cin>>oneRupee;

        // cout<<"Enter the no. of two rupee : ";
        cin>>twoRupee;
        
        if(oneRupee % 2 != 0) cout<<"NO"<<endl;
        else{
            if(twoRupee % 2 == 0) cout<<"YES"<<endl;
            else{
                if(oneRupee == 0) cout<<"NO"<<endl;
                else cout<<"YES"<<endl;
            }
        }
    }
}