// Our Chef took the above advice very seriously and decided to set a target for himself. Chef decides to solve at least 10 problems every week for 4 weeks. Given the number of problems he actually solved in each week over 4 weeks as P1, P2, P3 and P4, output the number of weeks in which Chef met his target.

#include <iostream>
using namespace std;
int main(){
    int count = 0;
    for(int i = 0;i < 4;i++){
        int numberOfProblems;
        cout<<"Enter no. of problems : ";
        cin>>numberOfProblems;
        if(numberOfProblems >= 10) count++;
    }
    cout<<"The number of weeks in which Chef met his target will be : "<<count<<endl;
}