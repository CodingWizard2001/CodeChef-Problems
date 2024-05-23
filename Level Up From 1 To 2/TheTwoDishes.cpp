// Chef prepared two dishes yesterday. Chef had assigned the tastiness T1 and T2 to the first and to the second dish respectively. The tastiness of the dishes can be any integer between 0 and N (both inclusive). Unfortunately, Chef has forgotten the values of T1 and T2 that he had assigned to the dishes. However, he remembers the sum of the tastiness of both the dishes - denoted by S. Chef wonders, what can be the maximum possible absolute difference between the tastiness of the two dishes. Can you help the Chef in finding the maximum absolute difference?


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int varyTastiness,sumOfTastiness;
        cout<<"Enter the vary tastiness : ";
        cin>>varyTastiness;
        cout<<"Enter the sum of the tastiness : ";
        cin>>sumOfTastiness;
        if(sumOfTastiness <= varyTastiness) cout<<"The maximum absolute difference will be : "<<sumOfTastiness<<endl;
        else cout<<"The maximum absolute difference will be : "<<(2 * varyTastiness) - sumOfTastiness<<endl;
    }
}