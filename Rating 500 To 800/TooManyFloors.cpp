// Chef and Chefina are residing in a hotel. There are 10 floors in the hotel and each floor consists of 10 rooms. Floor 1 consists of room numbers 1 to 10. Floor 2 consists of room numbers 11 to 20. Floor i consists of room numbers 10 * (i − 1) + 1 to 10 * i. You know that Chef's room number is X while Chefina's Room number is Y. If Chef starts from his room, find the number of floors he needs to travel to reach Chefina's room.


#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int roomOfChef,roomOfChefina;
        cout<<"Enter the room no. of chef : ";
        cin>>roomOfChef;
        cout<<"Enter the room no. of chefina : ";
        cin>>roomOfChefina;
        int chefFloorNo = ((roomOfChef - 1) / 10) + 1;
        int chefinaFloorNo = ((roomOfChefina - 1) / 10) + 1;
        cout<<"The number of floors chef needs to travel are : "<<abs(chefFloorNo - chefinaFloorNo)<<endl;
    }
}