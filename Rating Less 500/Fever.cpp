// Chef is not feeling well today. He measured his body temperature using a thermometer and it came out to be X °F. A person is said to have fever if his body temperature is strictly greater than 98 °F. Determine if Chef has fever or not.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int temperature;
        cout<<"Enter the temperature of his body : ";
        cin>>temperature;
        if(temperature > 98) cout<<"Chef has fever"<<endl;
        else cout<<"Chef has no fever"<<endl;
    }
}