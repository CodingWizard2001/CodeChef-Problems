// Shubman Gill is playing an international match. He played a total of N balls, where, in the ith ball, he scored Ai runs. The strike rate of a player is calculated as : (no. of runs / no. of balls played) x 100. Preet, a math enthusiast, is currently watching the match. Help him find the number of times, Shubman's strike rate became exactly 100.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfBall;
        cout<<"Enter the no. Of balls are played : ";
        cin>>noOfBall;
        int arr[noOfBall];
        for(int i = 0;i < noOfBall;i++){
            cout<<"Enter the runs made at "<<i<<" th ball : ";
            cin>>arr[i];
        }
        int strikeRate = 0;
        float sum = 0;
        for(int i = 0;i < noOfBall;i++){
            sum += arr[i];
            if((sum / (i + 1)) * 100.0 == 100) strikeRate++;
        }
        cout<<"No. of times strike rate became exactly 100 will be : "<<strikeRate<<endl;
    }
}