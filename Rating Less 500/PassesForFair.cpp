// There is a fair going on in Chefland. Chef wants to visit the fair along with his N friends. Chef manages to collect K passes for the fair. Will Chef be able to enter the fair with all his N friends? A person can enter the fair using one pass, and each pass can be used by only one person.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfFriends,noOfPasses;
        cout<<"Enter the no. of friends chef have : ";
        cin>>noOfFriends;
        cout<<"Enter the no. of passes chef have : ";
        cin>>noOfPasses;
        if((noOfFriends + 1) <= noOfPasses) cout<<"Chef will be able to enter the fair with all his friends"<<endl;
        else cout<<"Chef will not be able to enter the fair with all his friends"<<endl;
    }
}