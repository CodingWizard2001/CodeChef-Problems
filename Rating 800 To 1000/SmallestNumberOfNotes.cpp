// Consider a currency system in which there are notes of six denominations, namely, Rs. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100. If the sum of Rs. N is input, write a program to compute smallest number of notes that will combine to give Rs. N.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int value;
        cout<<"Enter the value : ";
        cin>>value;
        int rupees100 = (value / 100);
        value %= 100;

        int rupees50 = (value / 50);
        value %= 50;

        int rupees10 = (value / 10);
        value %= 10;

        int rupees5 = (value / 5);
        value %= 5;

        int rupees2 = (value / 2);
        value %= 2;

        int rupees1 = (value / 1);
        value %= 1;

        cout<<"Total no. of notes : "<<(rupees100 + rupees50 + rupees10 + rupees5 + rupees2 + rupees1)<<endl;
    }
}