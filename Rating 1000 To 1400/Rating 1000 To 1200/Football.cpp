// A football competition has just finished. The players have been given points for scoring goals and points for committing fouls. Now, it is up to Alex to find the best player in the tournament. As a programmer, your job is to help Alex by telling him the highest number of points achieved by some player. You are given two sequences A1,A2,…,AN and B1,B2,…,BN. For each valid i, player i scored Ai goals and committed Bi fouls. For each goal, the player that scored it gets 20 points, and for each foul, 10 points are deducted from the player that committed it. However, if the resulting number of points of some player is negative, this player will be considered to have 0 points instead. You need to calculate the total number of points gained by each player and tell Alex the maximum of these values.


#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int len;
        // cout<<"Enter the length of the array : ";
        cin>>len;
        int arr[len],brr[len];
        for(int i = 0;i < len;i++){
            // cout<<"Enter the no. of goals made by <<(i + 1)<<"th player : ";
            cin>>arr[i];
        }

        for(int i = 0;i < len;i++){
            // cout<<"Enter the no. of fouls made by <<(i + 1)<<"th player : ";
            cin>>brr[i];
        }
        
        int maxi = 0;
        for(int i = 0;i < len;i++){
            int score = (arr[i] * 20) - (brr[i] * 10);
            maxi = max(maxi,score);
        }

        // cout<<"The total number of points gained by each player and tell Alex the maximum of these values will be : ";
        cout<<maxi<<endl;
    }
}