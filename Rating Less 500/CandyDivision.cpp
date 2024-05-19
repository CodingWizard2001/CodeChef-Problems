// There are three friends and a total of N candies. There will be a fight amongst the friends if all of them do not get the same number of candies. Chef wants to divide all the candies such that there is no fight. Find whether such distribution is possible.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfCandies;
        cout<<"Enter the no. of candies chef have : ";
        cin>>noOfCandies;
        if(noOfCandies % 3 == 0) cout<<"Distribution is possible"<<endl;
        else cout<<"Distribution is not possible"<<endl;
    }
}