// Alice has recently started playing Chess. Her current rating is X. She noticed that when she wins a game, her rating increases by 8 points. Can you help Alice in finding out the minimum number of games she needs to win in order to make her rating greater than or equal to Y?

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test cases : ";
    cin>>t;
    while(t--){
        int currentRating,dreamRating;
        cout<<"Enter alice's current rating : ";
        cin>>currentRating;
        cout<<"Enter alice's dream rating : ";
        cin>>dreamRating;
        int ans = 0;
        while(currentRating < dreamRating){
            ans++;
            currentRating += 8;
        }
        cout<<"The minimum number of games she needs to win in order to make her rating greater than her "<<dreamRating<<" will be : "<<ans<<endl;
    }
}