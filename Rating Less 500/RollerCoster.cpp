// Chef's son wants to go on a roller coaster ride. The height of Chef's son is X inches while the minimum height required to go on the ride is H inches. Determine whether he can go on the ride or not.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int heightOfChefSon,requiredHeight;
        cout<<"Enter the height of chef's son : ";
        cin>>heightOfChefSon;
        cout<<"Enter the height required to ride : ";
        cin>>requiredHeight;
        if(heightOfChefSon >= requiredHeight) cout<<"He can go on the ride"<<endl;
        else cout<<"He can't go on the ride"<<endl;
    }
}