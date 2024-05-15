// In Chef-land, a tennis game involves 4 referees. Each referee has to point out whether he considers the ball to be inside limits or outside limits. The ball is considered to be IN if and only if all the referees agree that it was inside limits. Given the decision of the 4 referees, help Chef determine whether the ball is considered inside limits or not.

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test-cases : ";
    cin>>t;
    while(t--){
        int ref1,ref2,ref3,ref4;
        cout<<"Enter 1st referee's decision : ";
        cin>>ref1;
        cout<<"Enter 2nd referee's decision : ";
        cin>>ref2;
        cout<<"Enter 3rd referee's decision : ";
        cin>>ref3;
        cout<<"Enter 4th referee's decision : ";
        cin>>ref4;
        int ans = (ref1 + ref2 + ref3 + ref4);
        if(ans > 0) cout<<"The ball isn't inside"<<endl;
        else cout<<"The ball is inside"<<endl;
    }
}