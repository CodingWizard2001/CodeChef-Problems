// A blood drive aims to collect N number of blood donations. The drive has collected X donations so far. Find the remaining number of donations needed to reach the target.

#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int aimsToCollectBlood,receivedDonations;
        cout<<"Enter the value of donations they are aiming for : ";
        cin>>aimsToCollectBlood;
        cout<<"Enter the received donations : ";
        cin>>receivedDonations;
        cout<<"The remaining number of donations needed to reach the "<<aimsToCollectBlood<<" will be : "<<(aimsToCollectBlood - receivedDonations)<<endl;
    }
}