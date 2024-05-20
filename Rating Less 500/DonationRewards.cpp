// On the occasion of World Blood Donor Day, Chef has organized an event to reward regular blood donors in Chefland.

// 1.  If the donor has made less than or equal to 3 donations, they receive a BRONZE donor badge.
// 2.  If the donor has made more than 3 but less than equal to 6 donations, they receive a SILVER donor badge.
// 3.  If the donor has made more than 6 donations, they receive a GOLD donor badge.

// Given that a person has made X donations, find the badge they receive.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int donors;
        cout<<"Enter the no. of donors : ";
        cin>>donors;
        if(donors <= 3) cout<<"They receive a BRONZE donor badge"<<endl;
        else if(donors > 3 && donors <= 6) cout<<"They receive a SILVER donor badge"<<endl;
        else cout<<"They receive a GOLD donor badge"<<endl;
    }
}