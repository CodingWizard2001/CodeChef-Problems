// In a certain month, Chef earned X rupees while Chefina earned Y rupees such that Y > X. Since they want to end up with exactly the same amount, they decide to donate the difference between their income to a charity. Find the amount they donate in the month.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int earnByChef,earnByChefina;
        cout<<"Enter the amount chef earn : ";
        cin>>earnByChef;
        cout<<"Enter the amount chefina earn : ";
        cin>>earnByChefina;
        cout<<"The amount they donate in the month will be : "<<(earnByChefina - earnByChef)<<endl;
    }
}