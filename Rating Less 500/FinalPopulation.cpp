// There were initially X million people in a town, out of which Y million people left the town and Z million people immigrated to this town. Determine the final population of town in millions.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfPeoples,noOfPeopleLeft,noOfPeopleImmigrated;
        cout<<"Enter the no. of people lived in the town : ";
        cin>>noOfPeoples;
        cout<<"Enter the no. of people left from the town : ";
        cin>>noOfPeopleLeft;
        cout<<"Enter the no. of people immigrated from the town : ";
        cin>>noOfPeopleImmigrated;
        cout<<"Final population of town will be : "<<((noOfPeoples - noOfPeopleLeft) + noOfPeopleImmigrated)<<" millions"<<endl;
    }
}