// Chef wants to buy a stock whose price was S rupees when the market opened. He will buy the stock if and only if its price is in the range [A,B]. The price of the stock has changed by C% by the time he was trying to buy the stock. Will he be able to buy the stock?



#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int priceOfStock,minimumRange,maximumRange,changePrice;

        cout<<"Enter the price of the stock : ";
        cin>>priceOfStock;

        cout<<"Enter the minimum range of buying : ";
        cin>>minimumRange;

        cout<<"Enter the maximum range of buying : ";
        cin>>maximumRange;

        cout<<"Enter the change in price : ";
        cin>>changePrice;

        priceOfStock += (priceOfStock * (changePrice / 100.0));

        if(priceOfStock >= minimumRange && priceOfStock <= maximumRange) cout<<"Yes, he will buy the stock"<<endl;

        else cout<<"No, he will not buy the stock"<<endl;
    }
}