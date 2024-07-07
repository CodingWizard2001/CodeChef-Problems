// Chef is going to start playing Fantasy Football League (FFL) this season. In FFL, each team consists of exactly 15 players: 2 goalkeepers, 5 defenders, 5 midfielders and 3 forwards. Chef has already bought 13 players; he is only missing one defender and one forward. There are N available players (numbered 1 through N). For each valid i, the i-th player is either a defender or a forward and has a price Pi. The sum of prices of all players in a team must not exceed 100 dollars and the players Chef bought already cost him S dollars. Can you help Chef determine if he can complete the team by buying one defender and one forward in such a way that he does not exceed the total price limit?



#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int n,s;
        cin>>n>>s;
        int players[n];
        int types[n];
        for(int i = 0;i < n;i++) cin>>players[i];
        for(int i = 0;i < n;i++) cin>>types[i];
        int min0 = INT_MAX,min1 = INT_MAX;
        for(int i = 0;i < n;i++){
            if(types[i] == 0){
                if(players[i] < min0) min0 = players[i];
            }
            else{
                 if(players[i] < min1) min1 = players[i];
            }
        }
        if(min0 == INT_MAX || min1 == INT_MAX || (s + min0 + min1) > 100) cout<<"no"<<endl;
        else cout<<"yes"<<endl;
    }
}