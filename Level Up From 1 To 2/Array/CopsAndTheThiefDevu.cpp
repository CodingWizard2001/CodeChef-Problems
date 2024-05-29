// There are 100 houses located on a straight line. The first house is numbered 1 and the last one is numbered 100. Some M houses out of these 100 are occupied by cops. Thief Devu has just stolen PeePee's bag and is looking for a house to hide in. PeePee uses fast 4G Internet and sends the message to all the cops that a thief named Devu has just stolen her bag and ran into some house. Devu knows that the cops run at a maximum speed of x houses per minute in a straight line and they will search for a maximum of y minutes. Devu wants to know how many houses are safe for him to escape from the cops. Help him in getting this information.



#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int houseOccupyByCops,speedOfCops,searchTime,leftSearch = 0,rightSearch = 0;

        cout<<"Enter the no. of house occupy by cops : ";
        cin>>houseOccupyByCops;

        cout<<"Enter the speed of cops : ";
        cin>>speedOfCops;

        cout<<"Enter the searching time of cops : ";
        cin>>searchTime;

        int noOfHouseCoverByCops = (searchTime * speedOfCops);

        int arr[101] = {0};

        for(int i = 0;i < houseOccupyByCops;i++){
            int ele;
            cout<<"Enter the house no. that is occupied by cops : ";
            cin>>ele;

            if((ele - noOfHouseCoverByCops) > 0) leftSearch = (ele - noOfHouseCoverByCops);

            else leftSearch = 1;

            if((ele + noOfHouseCoverByCops) < 100) rightSearch = (ele + noOfHouseCoverByCops);

            else rightSearch = 100;

            for(int j = leftSearch;j <= rightSearch;j++) arr[j] = 1;
        }
        
        int noOfDangerHouse = 0;
        for(int i = 0;i <= 100;i++){
            if(arr[i] == 1) noOfDangerHouse++;
        }

        cout<<"No. of Safe house : "<<(100 - noOfDangerHouse)<<endl;
    }
}