// Chef has N items in his shop (numbered 1 through N); for each valid i, the price of the i-th item is Pi. Since Chef has very loyal customers, all N items are guaranteed to be sold regardless of their price. However, the government introduced a price ceiling K, which means that for each item i such that Pi > K, its price should be reduced from Pi to K. Chef's revenue is the sum of prices of all the items he sells. Find the amount of revenue which Chef loses because of this price ceiling.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfItems,priceCelling,sumOfBeforeGovernment = 0,sumOfAfterGovernment = 0;

        cout<<"Enter the no. of items : ";
        cin>>noOfItems;

        cout<<"Enter the price celling : ";
        cin>>priceCelling;

        int priceTag[noOfItems];

        for(int i = 0;i < noOfItems;i++){
            cout<<"Enter the price of "<<i<<"th item : ";
            cin>>priceTag[i];
        }

        for(int i = 0;i < noOfItems;i++){
            sumOfBeforeGovernment += priceTag[i];
        }

        for(int i = 0;i < noOfItems;i++){
            if(priceTag[i] > priceCelling) priceTag[i] = priceCelling;
            sumOfAfterGovernment += priceTag[i];
        }

        cout<<"The amount of revenue which Chef loses because of this price ceiling will be : "<<abs(sumOfBeforeGovernment - sumOfAfterGovernment)<<endl;
    }
}