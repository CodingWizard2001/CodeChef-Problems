// Chef defines a group of three friends as a perfect group if the age of one person is equal to the sum of the age of remaining two people. Given that, the ages of three people in a group are A,B, and C respectively, find whether the group is perfect.

#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int ageOfA,ageOfB,ageOfC;
        cout<<"Enter the age of A : ";
        cin>>ageOfA;
        cout<<"Enter the age of B : ";
        cin>>ageOfB;
        cout<<"Enter the age of C : ";
        cin>>ageOfC;
        int max = 0;
        if(ageOfA > ageOfB && ageOfA > ageOfC) max = ageOfA;
        else if(ageOfB > ageOfA && ageOfB > ageOfC) max = ageOfB;
        else max = ageOfC;
        if(((ageOfA + ageOfB + ageOfC) - max) == max) cout<<"The group is perfect"<<endl;
        else cout<<"The group isn't perfect"<<endl;
    }
}