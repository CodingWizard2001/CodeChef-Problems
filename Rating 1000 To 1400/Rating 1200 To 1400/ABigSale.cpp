// Chef recently opened a big e-commerce website where her recipes can be bought online. It's Chef's birthday month and so she has decided to organize a big sale in which grand discounts will be provided. In this sale, suppose a recipe should have a discount of x percent and its original price (before the sale) is p. Statistics says that when people see a discount offered over a product, they are more likely to buy it. Therefore, Chef decides to first increase the price of this recipe by x% (from p) and then offer a discount of x% to people. Chef has a total of N types of recipes. For each i (1 ≤ i ≤ N), the number of recipes of this type available for sale is quantityi, the unit price (of one recipe of this type, before the x% increase) is pricei and the discount offered on each recipe of this type (the value of x) is discounti. Please help Chef find the total loss incurred due to this sale, if all the recipes are sold out.




#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    cout<<fixed<<setprecision(6);
    while(testCase--){
        int noOfRecipes;
        // cout<<"Enter the no. of recipes : ";
        cin>>noOfRecipes;

        double loss = 0;
        while(noOfRecipes--){
            int price,quantity,discount;
            
            // cout<<"Enter the price of food : ";
            cin>>price;

            // cout<<"Enter the quantity of food item : ";
            cin>>quantity;
            
            // cout<<"Enter the discount offer : ";
            cin>>discount;

            loss += price * quantity * pow((discount / 100.0), 2);;
        }
        cout<<loss<<endl;
    }
}