// In discus throw, a player is given 3 throws and the throw with the longest distance is regarded as their final score. You are given the distances for all 3 throws of a player. Determine the final score of the player.

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test cases : ";
    cin>>t;
    while(t--){
        int throw1,throw2,throw3;
        cout<<"Enter distance covered in 1st throw : ";
        cin>>throw1;
        cout<<"Enter distance covered in 2nd throw : ";
        cin>>throw2;
        cout<<"Enter distance covered in 1st throw : ";
        cin>>throw3;
        if(throw1 > throw2 && throw1 >throw3) cout<<throw1<<" is the longest distance"<<endl;
        else{
            if(throw2 > throw3) cout<<throw2<<" is the longest distance"<<endl;
            else cout<<throw3<<" is the longest distance"<<endl;
        }
    }
}