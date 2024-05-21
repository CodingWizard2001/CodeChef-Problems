// Chef is looking to buy a TV and has shortlisted two models. The first one costs A rupees, while the second one costs B rupees. Since there is a huge sale coming up on Chefzon, Chef can get a flat discount of C rupees on the first TV, and a flat discount of D rupees on the second one. Help Chef determine which of the two TVs would be cheaper to buy during the sale.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int priceOfFirstTv,priceOfSecondTv,discountOnFirstTv,discountOfSecondTv;
        cout<<"Enter the price of first TV : ";
        cin>>priceOfFirstTv;
        cout<<"Enter the price of second TV : ";
        cin>>priceOfSecondTv;
        cout<<"Enter the discount of first TV : ";
        cin>>discountOnFirstTv;
        cout<<"Enter the discount of second TV : ";
        cin>>discountOfSecondTv;
        if((priceOfFirstTv - discountOnFirstTv) == (priceOfSecondTv - discountOnFirstTv)) cout<<"He can choose any TV"<<endl;
        else if((priceOfFirstTv - discountOnFirstTv) > (priceOfSecondTv - discountOfSecondTv)) cout<<"He should choose second TV"<<endl;
        else cout<<"He should choose first TV"<<endl;
    }
}