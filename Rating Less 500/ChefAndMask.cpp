// Chef is shopping for masks. In the shop, he encounters 2 types of masks:

// 1.  Disposable Masks — cost X but last only 1 day.
// 2.  Cloth Masks — cost Y but last 10 days.

// Chef wants to buy masks to last him 100 days. He will buy the masks which cost him the least. In case there is a tie in terms of cost, Chef will be eco-friendly and choose the cloth masks. Which type of mask will Chef choose?

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int costOfClothMask,costOfDisposableMask;
        cout<<"Enter the cost of cloth mask : ";
        cin>>costOfClothMask;
        cout<<"Enter the cost of disposable mask : ";
        cin>>costOfDisposableMask;
        if((costOfClothMask * 10) >= (costOfDisposableMask * 1)) cout<<"Chef choose cloth mask"<<endl;
        else cout<<"Chef choose disposable mask"<<endl;
    }
}