// There are G girl and B boy students at IIT (BHU) such that B > G. If ICM were a team game where teams could only be of size 2, having exactly 1 girl student and 1 boy student, what would be the minimum number of boy students from IIT (BHU) who would not be able to participate?

#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfGirl,noOfBoy;
        cout<<"Enter the no. of girl read in IIT BHU : ";
        cin>>noOfGirl;
        cout<<"Enter the no. of Boy read in IIT BHU : ";
        cin>>noOfBoy;
        cout<<"The minimum number of boy students from IIT (BHU) who would not be able to participate will be : "<<(noOfBoy - noOfGirl)<<endl;
    }
}