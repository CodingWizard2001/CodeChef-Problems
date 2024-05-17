// Chef's colleague issued a challenge to Chef: "If you eat more than X mozzarella sticks, I'll give you 30 rupees for each extra one you eat". You know that the restaurant serves Y mozzarella sticks per plate. You also know that Chef received R rupees from his colleague as a result of the challenge. What's the maximum number of plates of mozzarella sticks that Chef could have ordered?

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no.of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfSticks,noOfSticksInPlate,moneyReceived;
        cout<<"Enter the no. of stick : ";
        cin>>noOfSticks;
        cout<<"Enter the no. of stick served in plate : ";
        cin>>noOfSticksInPlate;
        cout<<"Money received by chef : ";
        cin>>moneyReceived;
        int extraStickEatByChef = (moneyReceived / 30);
        int totalStickEatByChef = noOfSticks + extraStickEatByChef;
        if(totalStickEatByChef % noOfSticksInPlate == 0) cout<<"The maximum number of plates of mozzarella sticks that Chef could have ordered will be : "<<(totalStickEatByChef / noOfSticksInPlate)<<endl;
        else cout<<"The maximum number of plates of mozzarella sticks that Chef could have ordered will be : "<<(totalStickEatByChef / noOfSticksInPlate) + 1<<endl;
    }
}