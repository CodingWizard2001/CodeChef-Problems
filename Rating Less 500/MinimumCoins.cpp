// There are only 2 type of denominations in Chefland:

// 1.  Coins worth 1 rupee each
// 2.  Notes worth 10 rupees each

// Chef wants to pay his friend exactly X rupees. What is the minimum number of coins Chef needs to pay exactly X rupees?

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int rupee;
        cout<<"Enter the rupee chef have : ";
        cin>>rupee;
        cout<<"The minimum number of coins Chef needs to pay exactly "<<rupee<<" rupees will be : "<<(rupee % 10)<<endl;
    }
}