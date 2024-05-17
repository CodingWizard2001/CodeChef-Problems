// Alice and Bob are playing a game of table tennis where irrespective of the point scored, every player makes 2 consecutive serves before the service changes. Alice makes the first serve of the match. Therefore the first 2 serves will be made by Alice, then the next 2 serves will be made by Bob and so on.

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test cases : ";
    cin>>t;
    while(t--){
        int aliceScore,bobScore;
        cout<<"Enter the score of alice : ";
        cin>>aliceScore;
        cout<<"Enter the score of bob : ";
        cin>>bobScore;
        int score = (aliceScore + bobScore);
        if((score / 2) % 2 == 0) cout<<"It's Alice service"<<endl;
        else  cout<<"It's Bob service"<<endl;
    }
}