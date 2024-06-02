// Daanish as always is busy creating and solving his favourite and interesting graph problems. Chef assigns each problem a difficulty — an integer between 1 and 10. For each valid i, there are Ai problems with difficulty i. A participant hacked Daanish's account and got access to the problem proposal document. He can delete up to K problems from the document in order to reduce the difficulty of the contest for himself and his friends. Find the smallest possible value of the difficulty of the most difficult problem which remains after removing K problems.


#include <bits/stdc++.h>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int problems[10];
        for(int i = 0;i < 10;i++){
            cout<<"Enter the no. of problems at "<<(i + 1)<<"th position : ";
            cin>>problems[i];
        }

        int maximumDelete;
        cout<<"Enter the no. of problems can be delete : ";
        cin>>maximumDelete;

        for(int i = 9;i >= 0;i--){
            if(maximumDelete >= problems[i]){
                maximumDelete -= problems[i];
                problems[i] = 0;
            }
            else{
                problems[i] -= maximumDelete;
                maximumDelete = 0;
                break;
            }
        }

        for(int i = 9;i >= 0;i--){
            if(problems[i] != 0){
                cout<<"The smallest possible value of the difficulty will be : "<<(i + 1)<<endl;
                break;
            }
        }
    }
}