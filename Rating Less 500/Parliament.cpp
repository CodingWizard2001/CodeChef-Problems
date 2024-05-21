// An important resolution is being discussed in the Parliament of Chefland. There are N members present in the Parliament out of which X members voted in favour of the resolution and the remaining voted against it. According to the constitution of Chefland, a resolution is passed if and only if half or more than half the members present in the Parliament vote in favour of the resolution. Determine if the resolution is passed or not.

#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfMembers,noOfVote;
        cout<<"Enter the no. of members : ";
        cin>>noOfMembers;
        cout<<"Enter the no. of vote gives to resolution : ";
        cin>>noOfVote;
        if((noOfVote * 2) >= noOfMembers) cout<<"The resolution is passed"<<endl;
        else cout<<"The resolution is not passed"<<endl;
    }
}