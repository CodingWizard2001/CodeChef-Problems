// Chef wants to rent a car to travel to his restaurant which is N kilometers away. He can either rent a petrol car or a diesel car. One litre of petrol costs X rupees and one litre of diesel costs Y rupees. Chef can travel A kilometers with one litre of petrol and B kilometers with one litre of diesel.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int distanceOfRestaurant,costOfPetrol,costOfDiesel,distanceTravelBy1LitrePetrol,distanceTravelBy1LitreDiesel;
        cout<<"Enter the distance of restaurant : ";
        cin>>distanceOfRestaurant;
        cout<<"Enter the cost of petrol : ";
        cin>>costOfPetrol;
        cout<<"Enter the cost of diesel : ";
        cin>>costOfDiesel;
        cout<<"Enter the distance can traveled by 1 litre petrol : ";
        cin>>distanceTravelBy1LitrePetrol;
        cout<<"Enter the distance can traveled by 1 litre diesel : ";
        cin>>distanceTravelBy1LitreDiesel;
        float totalCostOfPetrol = ((distanceOfRestaurant / float(distanceTravelBy1LitrePetrol)) * costOfPetrol);
        float totalCostOfDiesel = ((distanceOfRestaurant / float(distanceTravelBy1LitreDiesel)) * costOfDiesel);

        if(totalCostOfPetrol == totalCostOfDiesel) cout<<"He can choose any car"<<endl;
        else if(totalCostOfPetrol < totalCostOfDiesel) cout<<"He should choose petrol car"<<endl;
        else cout<<"He should choose diesel car"<<endl;
    }
}