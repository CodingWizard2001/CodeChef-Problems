// Chef classifies a day to be either rainy, cloudy, or clear. In a particular week, Chef finds X days to be rainy and Y days to be cloudy. Find the number of clear days in the week.

#include<iostream>
using namespace std;
int main(){
    int rainyDays,cloudyDays;
    cout<<"Enter the no. of rainy days : ";
    cin>>rainyDays;
    cout<<"Enter the no. of cloudy days : ";
    cin>>cloudyDays;
    cout<<"The number of clear days in the week will be : "<<(7 - rainyDays - cloudyDays)<<endl;
}