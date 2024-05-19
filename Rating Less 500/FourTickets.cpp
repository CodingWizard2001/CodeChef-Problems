// Four friends want to attend a concert. Each ticket costs X rupees. They have decided to go to the concert if and only if the total cost of the tickets does not exceed 1000 rupees. Determine whether they will be going to the concert or not.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int costOfTicket;
        cout<<"Enter the cost of the ticket : ";
        cin>>costOfTicket;
        if((4 * costOfTicket) <= 1000) cout<<"They will be going to the concert"<<endl;
        else cout<<"They will not be going to the concert"<<endl;
    }
}