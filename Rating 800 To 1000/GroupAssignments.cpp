// Chef's professor is planning to give his class a group assignment. There are 2N students in the class, with distinct roll numbers ranging from 1 to 2N. Chef's roll number is X. The professor decided to create N groups of 2 students each. The groups were created as follows: the first group consists of roll numbers 1 and 2N, the second group of roll numbers 2 and (2 * N) − 1, and so on, with the final group consisting of roll numbers N and N+1. Chef wonders who his partner will be. Can you help Chef by telling him the roll number of his partner?


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int totalNoOfGroup,rollOfChef;
        cout<<"Enter total no. of group : ";
        cin>>totalNoOfGroup;
        cout<<"Enter the roll no. of chef : ";
        cin>>rollOfChef;
        cout<<"The roll number of Chef's partner will be : "<<((2 * totalNoOfGroup) + 1) - rollOfChef<<endl; 
    }
}