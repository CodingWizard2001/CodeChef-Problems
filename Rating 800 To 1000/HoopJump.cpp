// You and your friend are playing a game with hoops. There are N hoops (where N is odd) in a row. You jump into hoop 1, and your friend jumps into hoop N. Then you jump into hoop 2, and after that, your friend jumps into hoop (N − 1), and so on. The process ends when someone cannot make the next jump because the hoop is occupied by the other person. Find the last hoop that will be jumped into.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfHoop;
        cout<<"Enter the no. of hoop : ";
        cin>>noOfHoop;
        cout<<"The last hoop that will be jumped into will be : "<<(noOfHoop + 1) / 2<<endl;
    }
}