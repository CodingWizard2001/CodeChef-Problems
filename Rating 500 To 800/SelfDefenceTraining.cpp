// After the phenomenal success of the 36th Chamber of Shaolin, San Te has decided to start 37th Chamber of Shaolin. The aim this time is to equip women with shaolin self-defense techniques. The only condition for a woman to be eligible for the special training is that she must be between 10 and 60 years of age, inclusive of both 10 and 60. Given the ages of N women in his village, please help San Te find out how many of them are eligible for the special training.


#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int length;
        cout<<"Enter the length of the array : ";
        cin>>length;
        int womenCanJoin = 0;
        while(length--){
            int age;
            cout<<"Enter the women's age : ";
            cin>>age;
            if(age >= 10 && age <= 60) womenCanJoin++;
        }
        cout<<"No. of women are eligible for the special training : "<<womenCanJoin<<endl;
    }
}