// Consider a fraction b / a. Its Height is defined as the maximum of its numerator and denominator. Given a and b, find the Height of b / a.

#include <iostream>
using namespace std;
int main(){
    int numerator,denominator;
    cout<<"Enter the numerator : ";
    cin>>numerator;
    cout<<"Enter the denominator : ";
    cin>>denominator;
    if(numerator < denominator) cout<<"The Height of "<<numerator<<" / "<<denominator<<" will be : "<<denominator<<endl;
    else cout<<"The Height of "<<numerator<<" / "<<denominator<<" will be : "<<numerator<<endl;
}