// Chef has two integers A and B. In one operation he can choose any integer d, and make one of the following two moves :

// 1.  Add d to A and subtract d from B.
// 2.  Add d to B and subtract d from A.

// Chef is allowed to make as many operations as he wants. Can he make A and B equal?


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int number1,number2;
        cout<<"Enter the first number : ";
        cin>>number1;
        cout<<"Enter the second number : ";
        cin>>number2;
        if(abs(number1 - number2) % 2 != 0) cout<<"He can't make "<<number1<<" and "<<number2<<" equal"<<endl;
        else cout<<"He can make "<<number1<<" and "<<number2<<" equal"<<endl;
    }
}