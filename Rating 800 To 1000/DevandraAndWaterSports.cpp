// Recently, Devendra went to Goa with his friends. Devendra is well known for not following a budget.He had Rs. Z at the start of the trip and has already spent Rs. Y on the trip. There are three kinds of water sports one can enjoy, with prices Rs. A, B, and C. He wants to try each sport at least once. If he can try all of them at least once output YES, otherwise output NO.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int budgetOfDevendra,moneyThatAlreadySpend,waterParks1Cost,waterParks2Cost,waterParks3Cost;
        cout<<"Enter the budget Devendra have : ";
        cin>>budgetOfDevendra;
        cout<<"Enter the amount of money Devendra already spend : ";
        cin>>moneyThatAlreadySpend;
        cout<<"Enter the cost of first water park : ";
        cin>>waterParks1Cost;
        cout<<"Enter the cost of second water park : ";
        cin>>waterParks2Cost;
        cout<<"Enter the cost of third water park : ";
        cin>>waterParks3Cost;

        if((budgetOfDevendra - moneyThatAlreadySpend) >= (waterParks1Cost + waterParks2Cost + waterParks3Cost)) cout<<"He can try all water parks of them at least once"<<endl;
        else cout<<"He can't try all water parks of them at least once"<<endl;
    }
}