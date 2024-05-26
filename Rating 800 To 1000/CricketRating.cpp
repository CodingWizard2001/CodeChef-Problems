// In a season, each player has three statistics: runs, wickets, and catches. Given the season stats of two players A and B, denoted by R, W, and C respectively, the person who is better than the other in the most statistics is regarded as the better overall player. Tell who is better amongst A and B. It is known that in each statistic, the players have different values.



#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int runByPlayerA,wicketByPlayerA,catchByPlayerA;
        
        cout<<"Enter the run made by player A : ";
        cin>>runByPlayerA;
        
        cout<<"Enter the wicket take by player A : ";
        cin>>wicketByPlayerA;
        
        cout<<"Enter the catch take by player A : ";
        cin>>catchByPlayerA;

        int runByPlayerB,wicketByPlayerB,catchByPlayerB;
        
        cout<<"Enter the run made by player B : ";
        cin>>runByPlayerB;
        
        cout<<"Enter the wicket take by player B : ";
        cin>>wicketByPlayerB;
        
        cout<<"Enter the catch take by player B : ";
        cin>>catchByPlayerB;

        int ratingOfPlayerA = 0,ratingOfPlayerB = 0;

        if(runByPlayerA > runByPlayerB) ratingOfPlayerA++;
        else ratingOfPlayerB++;

        if(catchByPlayerA > catchByPlayerB) ratingOfPlayerA++;
        else ratingOfPlayerB++;

        if(wicketByPlayerA > wicketByPlayerB) ratingOfPlayerA++;
        else ratingOfPlayerB++;

        if(ratingOfPlayerA > ratingOfPlayerB) cout<<"Player A is better than Player B"<<endl;

        else cout<<"Player B is better than Player A"<<endl;
    }
}