// Chef prepared a problem. The admin has rated this problem for x points. A problem is called :

// 1.  Easy if 1 ≤ x < 100
// 2.  Medium if 100 ≤ x < 200
// 3.  Hard if 200 ≤ x ≤ 300

// Find the category to which Chef's problem belongs.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int rateOfProblem;
        cout<<"Enter the rating of the problem : ";
        cin>>rateOfProblem;

        if(rateOfProblem >= 200) cout<<"Problem : Hard"<<endl;

        else if(rateOfProblem >= 100) cout<<"Problem : Medium"<<endl;

        else cout<<"Problem : Easy"<<endl;
    }
}