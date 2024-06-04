// There are n chocolates, and you are given an array of n numbers where the i-th number Ai is the flavour type of the i-th chocolate. Sebrina wants to eat as many different types of chocolates as possible, but she also has to save at least x number of chocolates for her little brother. Find the maximum possible number of distinct flavour types Sebrina can have.


#include <bits/stdc++.h>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfChocolates,saveChocolate;
        cout<<"Enter the no. of chocolates : ";
        cin>>noOfChocolates;

        cout<<"Enter the no. of chocolates have to save : ";
        cin>>saveChocolate;

        vector<int>arr(noOfChocolates);
        for(int i = 0;i < noOfChocolates;i++){
            cout<<"Enter the flavour of "<<(i + 1)<<"th chocolate : ";
            cin>>arr[i];
        }

        set<int>sebrinaCanEat(arr.begin(),arr.end());
        int maximumChocolateCanEat = (noOfChocolates - saveChocolate);

        cout<<"The maximum possible number of distinct flavour types Sebrina can get : "<<min((int)sebrinaCanEat.size(),maximumChocolateCanEat)<<endl;
    }
}