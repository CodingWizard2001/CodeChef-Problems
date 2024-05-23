// Chef aims to be the richest person in Chefland by his new restaurant franchise. Currently, his assets are worth A billion dollars and have no liabilities. He aims to increase his assets by X billion dollars per year. Also, all the richest people in Chefland are not planning to grow and maintain their current worth. To be the richest person in Chefland, he needs to be worth at least B billion dollars. How many years will it take Chef to reach his goal if his value increases by X billion dollars each year?

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int assetsOfChef,richestPeopleAssets,increaseAssets;
        cout<<"Enter the amount of assets Chef currently have : ";
        cin>>assetsOfChef;
        cout<<"Enter the amount of assets richest person have : ";
        cin>>richestPeopleAssets;
        cout<<"Enter the amount of assets Chef wants to increase every year : ";
        cin>>increaseAssets;
        cout<<"No. of years will it take Chef to reach his goal will be : "<<((richestPeopleAssets - assetsOfChef) / increaseAssets)<<endl;
    }
}