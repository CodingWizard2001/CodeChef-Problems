// Sonu and Titu are playing a tennis match. They are playing a "best of N sets" match (N is always odd). That means that they will play at most N sets, and the person who has won most sets wins the match. But they are smart, and if they notice at any point that one of them has no chance of winning the match, they will stop the match right then, without playing out all the N sets needlessly.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int scoreOfSonu,scoreOfTitu;
        cout<<"Enter the score made by Sonu : ";
        cin>>scoreOfSonu;
        cout<<"Enter the score made by Titu : ";
        cin>>scoreOfTitu;
        cout<<"No. of sets need to play : "<<(scoreOfSonu + scoreOfTitu + (abs(scoreOfSonu - scoreOfTitu) - 1))<<endl;
    }
}