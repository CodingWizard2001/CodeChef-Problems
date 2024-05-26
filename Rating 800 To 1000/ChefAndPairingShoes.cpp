// Chef has N slippers, L of which are left slippers and the rest are right slippers. Slippers must always be sold in pairs, where each pair contains one left and one right slipper. If each pair of slippers cost X rupees, what is the maximum amount of rupees that Chef can get for these slippers?


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfShoes,noOfLeftShoes,costOfPair;

        cout<<"Enter the no. of shoes : ";
        cin>>noOfShoes;

        cout<<"Enter the no. of left shoes : ";
        cin>>noOfLeftShoes;

        cout<<"Enter the cost of each pair shoes : ";
        cin>>costOfPair;

        int pairOfShoes = min(noOfLeftShoes,(noOfShoes - noOfLeftShoes));

        cout<<"The maximum amount of rupees that Chef can get for these slippers will be : "<<(pairOfShoes * costOfPair)<<endl;
    }
}