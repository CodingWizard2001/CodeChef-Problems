// Chef has two ranges [ A , B ] and [ C , D ]. Chef needs to find the number of integers that belong to at least one of the ranges.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int startingPointOfFirstRange,endingPointOfFirstRange,startingPointOfSecondRange,endingPointOfSecondRange;

        cout<<"Enter the starting point of first range : ";
        cin>>startingPointOfFirstRange;

        cout<<"Enter the ending point of first range : ";
        cin>>endingPointOfFirstRange;

        cout<<"Enter the starting point of second range : ";
        cin>>startingPointOfSecondRange;

        cout<<"Enter the ending point of second range : ";
        cin>>endingPointOfSecondRange;

        int difference = (endingPointOfFirstRange - startingPointOfFirstRange) + 1;

        for(int i = startingPointOfSecondRange;i <= endingPointOfSecondRange;i++){
            if(i < startingPointOfFirstRange || i > endingPointOfFirstRange) difference++;
        }

        cout<<"The number of integers that are belong inside to at least one of the ranges will be : "<<difference<<endl;
    }
}