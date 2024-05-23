// There is a sale going on in Chefland. For every 2 items Chef pays for, he gets the third item for free (see sample explanations for more clarity). It is given that the cost of 1 item is X rupees. Find the minimum money required by Chef to buy at least N items.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfItems,costOfEachItem;
        cout<<"Enter the no. of items : ";
        cin>>noOfItems;
        cout<<"Enter the cost of each item : ";
        cin>>costOfEachItem;
        cout<<"The minimum money required by Chef to buy at least "<<noOfItems<<" items will be : "<<(costOfEachItem * (noOfItems - (noOfItems / 3)))<<endl;
    }
}