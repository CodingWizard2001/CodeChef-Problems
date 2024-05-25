// Given the rating R of a person, tell which division he belongs to. The rating range for each division are given below:

// 1.  Division 1 : 2000 ≤ Rating.
// 2.  Division 2 : 1600 ≤ Rating < 2000.
// 3.  Division 3 : Rating < 1600.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int rating;
        cout<<"Enter the rating : ";
        cin>>rating;
        if(rating >= 2000) cout<<"Division 1"<<endl;
        else if(rating >= 1600) cout<<"Division 2"<<endl;
        else cout<<"Division 3"<<endl;
    }
}