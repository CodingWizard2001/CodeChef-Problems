// Chef is ordering food online (instead of cooking) and the bill comes out to be Rs. X. Chef can use one of the following two coupons to avail a discount.

// 1.  Get 10 percent off on the bill amount
// 2.  Get a flat discount of Rs. 100 on the bill amount

// What is the maximum discount Chef can avail?

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int billOfFood;
        cout<<"Enter the cost of food : ";
        cin>>billOfFood;
        int afterApplyingFirstCoupon = (billOfFood - ((billOfFood * 10) / 100));
        int afterApplyingSecondCoupon = (billOfFood - 100);
        if(afterApplyingFirstCoupon > afterApplyingSecondCoupon) cout<<"The maximum discount Chef can avail will be Second coupon that is "<<100<<endl;
        else cout<<"The maximum discount Chef can avail will be First coupon that is "<<((billOfFood * 10) / 100)<<endl;
    }
}