// Chef is watching a football match. The current score is A:B, that is, team1 has scored A goals and team2 has scored B goals. Chef wonders if it is possible for the score to become C:D at a later point in the game (i.e. team1 has scored C goals and team2 has scored D goals). Can you help Chef by answering his question?

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test cases : ";
    cin>>t;
    while(t--){
        int a,b;
        cout<<"Enter no. of goals team1 scored : ";
        cin>>a;
        cout<<"Enter no. of goals team2 scored : ";
        cin>>b;
        int c,d;
        cout<<"Enter no. of goals chef is assuming for team1 : ";
        cin>>c;
        cout<<"Enter no. of goals chef is assuming for team2 : ";
        cin>>d;
        if(c < a || d < b) cout<<"It's impossible"<<endl;
        else cout<<"It's possible"<<endl;
    }
}