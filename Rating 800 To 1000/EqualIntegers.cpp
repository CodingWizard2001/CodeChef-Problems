// Chef has two integers X and Y. Chef wants to perform some operations to make X and Y equal. In one operation, Chef can either:

// 1.  set X : = X + 1 or 
// 2.  set Y : = Y + 2

// Find the minimum number of operations required to make X and Y equal.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int firstInteger,secondInteger;
        cout<<"Enter the first integers's value : ";
        cin>>firstInteger;
        cout<<"Enter the second integer's value : ";
        cin>>secondInteger;
        if(firstInteger == secondInteger) cout<<"The minimum number of operations are required : "<<0<<endl;
        else if(firstInteger < secondInteger) cout<<"The minimum number of operations are required : "<<(secondInteger - firstInteger)<<endl;
        else{
            if((firstInteger - secondInteger) % 2 == 0) cout<<"The minimum number of operations are required : "<<(firstInteger - secondInteger) / 2<<endl;
            else cout<<"The minimum number of operations are required : "<<((firstInteger - secondInteger) / 2) + 2<<endl;
        }
    }
}