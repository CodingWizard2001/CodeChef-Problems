// Chef is on his way to become the new big bull of the stock market but is a bit weak at calculating whether he made a profit or a loss on his deal. Given that Chef bought the stock at value X and sold it at value Y. Help him calculate whether he made a profit, loss, or was it a neutral deal.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int boughtPrice,soldPrice;
        cout<<"Enter the price chef bought the stock : ";
        cin>>boughtPrice;
        cout<<"Enter the price chef sold the stock : ";
        cin>>soldPrice;
        if(boughtPrice == soldPrice) cout<<"He made a neutral deal"<<endl;
        else if(boughtPrice > soldPrice) cout<<"He made a loss deal"<<endl;
        else cout<<"He made a profit deal"<<endl;
    }
}