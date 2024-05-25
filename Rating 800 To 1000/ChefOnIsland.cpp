// Suppose Chef is stuck on an island and currently he has x units of food supply and y units of water supply in total that he could collect from the island. He needs xr units of food supply and yr units of water supply per day at the minimal to have sufficient energy to build a boat from the woods and also to live for another day. Assuming it takes exactly D days to build the boat and reach the shore, tell whether Chef has the sufficient amount of supplies to be able to reach the shore by building the boat?


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int foodSupplyAlreadyHave,waterSupplyAlreadyHave,
        minimalFoodNeedsToConsume,minimalWaterNeedsToConsume,daysNeedToFinishBoat;
        cout<<"Enter the no. of units of food supply Chef already have : ";
        cin>>foodSupplyAlreadyHave;
        cout<<"Enter the no. of units of water supply Chef already have : ";
        cin>>waterSupplyAlreadyHave;
        cout<<"Enter the minimum units of food required to consume : ";
        cin>>minimalFoodNeedsToConsume;
        cout<<"Enter the minimum units of water required to consume : ";
        cin>>minimalWaterNeedsToConsume;
        cout<<"No. of days need to construct a boat : ";
        cin>>daysNeedToFinishBoat;
        float noOfDaysFoodWillGo = (foodSupplyAlreadyHave / float(minimalFoodNeedsToConsume));
        float noOfDaysWaterWillGo = (waterSupplyAlreadyHave / float(minimalWaterNeedsToConsume));
        int minimumOfThese2 = min(noOfDaysFoodWillGo,noOfDaysWaterWillGo);
        if(minimumOfThese2 >= daysNeedToFinishBoat) cout<<"He will reach the shore by building the boat"<<endl;
        else cout<<"He will not reach the shore by building the boat"<<endl;
    }
}