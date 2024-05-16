// Chef has N empty bottles where each bottle has a capacity of X litres. There is a water tank in Chef-land having K litres of water. Chef wants to fill the empty bottles using the water in the tank. Assuming that Chef does not spill any water while filling the bottles, find out the maximum number of bottles Chef can fill completely.

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test cases : ";
    cin>>t;
    while(t--){
        int emptyBottles,capacityOfBottles,capacityOfTank;
        cout<<"Enter the no. of empty bottles : ";
        cin>>emptyBottles;
        cout<<"Enter the capacity of empty bottles : ";
        cin>>capacityOfBottles;
        cout<<"Enter the capacity of tank : ";
        cin>>capacityOfTank;
        int filledBottles = (capacityOfTank / capacityOfBottles);
        if(filledBottles > emptyBottles) cout<<"The maximum number of bottles Chef can fill completely will be : "<<emptyBottles<<endl;
        else cout<<"The maximum number of bottles Chef can fill completely will be : "<<filledBottles<<endl;
    }
}