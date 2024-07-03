// Jem is famous for his laziness at school. He always leaves things to last minute. Now Jem has N problems in the assignment of "Advanced topics in algorithm" class to solved. The assignment is due tomorrow and as you may guess he hasn't touch any of the problems. Fortunately he got a plan as always. The first step will be buying a pack of Red Bull and then to work as hard as he can. Here is how he is going to spend the remaining time: Jem will not take a break until he finishes at least half of the remaining problems. Formally, if N is even then he will take he first break after finishing N / 2 problems. If N is odd then the break will be after he done (N + 1) / 2 problems. Each of his break will last for B minutes. Initially, he takes M minutes in solving a problem, after each break he will take twice more time in solving a problem, i.e. 2 * M minutes per problem after the first break. Jem will start working soon and ask you to help him calculate how much time it will take until he finish the last problem!


#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        long noOfProblem,timeTake,speed;
        // cout<<"Enter the no. of problem : ";
        cin>>noOfProblem;

        // cout<<"Enter the time taken by Jem : ";
        cin>>timeTake;

        // cout<<"Enter the speed : ";
        cin>>speed;
            
        long long sum = 0;
        while(noOfProblem){
            int operation = (noOfProblem + 1) / 2;
            sum += (operation * speed) + timeTake;
            noOfProblem -= operation;
            speed *= 2;
        }
        cout<<(sum - timeTake)<<endl;
    }
}