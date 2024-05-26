// Chef has obtained the results of a past Cook-Off. He wants to estimate the skill level of each contestant. The contestants can be classified with high probability (w.h.p.) based on the number of solved problems:

// 1.  A contestant that solved exactly 0 problems is a beginner.
// 2.  A contestant that solved exactly 1 problem is a junior developer.
// 3.  A contestant that solved exactly 2 problems is a middle developer.
// 4.  A contestant that solved exactly 3 problems is a senior developer.
// 5.  A contestant that solved exactly 4 problems is a hacker.
// 6.  A contestant that solved all five problems is Jeff Dean.



#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int arr[5];

        for(int i = 0;i < 5;i++){
            cout<<"Enter the Problems solved : ";
            cin>>arr[i];
        }

        int totalProblemSolved = 0;

        for(int i = 0;i < 5;i++){
            if(arr[i] == 1) totalProblemSolved++;
        }

        if(totalProblemSolved == 0) cout<<"Level : Beginner"<<endl;
        else if(totalProblemSolved == 1) cout<<"Level : Junior Developer"<<endl;
        else if(totalProblemSolved == 2) cout<<"Level : Middle Developer"<<endl;
        else if(totalProblemSolved == 3) cout<<"Level : Senior Developer"<<endl;
        else if(totalProblemSolved == 4) cout<<"Level : Hacker"<<endl;
        else cout<<"Level : Jeff Dean"<<endl;
    }
}