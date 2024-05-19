// Chef's current age is 20 years, while Chefina's current age is 10 years. Determine Chefina's age when Chef will be X years old.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int ageOfChef;
        cout<<"Enter the age of chef : ";
        cin>>ageOfChef;
        cout<<"Chefina's age will be : "<<(ageOfChef - 10)<<endl;
    }
}