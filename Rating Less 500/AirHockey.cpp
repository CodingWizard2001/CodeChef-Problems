// Alice is playing Air Hockey with Bob. The first person to earn seven points wins the match. Currently, Alice's score is A and Bob's score is B. Charlie is eagerly waiting for his turn. Help Charlie by calculating the minimum number of points that will be further scored in the match before it ends.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int scoreOfAlice,scoreOfBob;
        cout<<"Enter the score of Alice in Air hockey : ";
        cin>>scoreOfAlice;

        cout<<"Enter the score of Bob in Air hockey : ";
        cin>>scoreOfBob;

        cout<<"The minimum number of points that will be further scored in the match before it ends will be : "<<min((7 - scoreOfAlice),(7 - scoreOfBob))<<endl;
    }
}