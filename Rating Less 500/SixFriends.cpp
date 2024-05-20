// Six friends go on a trip and are looking for accommodation. After looking for hours, they find a hotel which offers two types of rooms — double rooms and triple rooms. A double room costs Rs. X, while a triple room costs Rs. Y. The friends can either get three double rooms or get two triple rooms. Find the minimum amount they will have to pay to accommodate all six of them.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int doubleRoomCost,tripleRoomCost;
        cout<<"Enter the double room cost : ";
        cin>>doubleRoomCost;
        cout<<"Enter the triple room cost : ";
        cin>>tripleRoomCost;
        cout<<"The minimum amount they will have to pay to accommodate all six of them will be : "<<min((doubleRoomCost * (6 / 2)),(tripleRoomCost * (6 / 3)))<<endl;
    }
}