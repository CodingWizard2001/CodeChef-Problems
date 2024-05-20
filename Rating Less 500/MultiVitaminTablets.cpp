// The doctor prescribed Chef to take a multivitamin tablet 3 times a day for the next X days. Chef already has Y multivitamin tablets. Determine if Chef has enough tablets for these X days or not.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfVitaminsChefNeed,noOfVitaminsChefHave;
        cout<<"Enter the no. of vitamins chef need : ";
        cin>>noOfVitaminsChefNeed;
        cout<<"Enter the no. of vitamins chef have : ";
        cin>>noOfVitaminsChefHave;
        if((noOfVitaminsChefNeed * 3) <= noOfVitaminsChefHave) cout<<"Chef has enough tablets"<<endl;
        else cout<<"Chef has not enough tablets"<<endl;
    }
}