// The National Championships are starting soon. There are 4 race categories, numbered from 1 to 4, that Chef is interested in. Chef is participating in exactly 2 of these categories. Chef has an arch-rival who is, unfortunately, the only person participating who is better than Chef, i.e, Chef can't defeat the arch-rival in any of the four race categories but can defeat anyone else. Chef's arch-rival is also participating in exactly 2 of the four categories. Chef hopes to not fall into the same categories as that of the arch-rival. Given X,Y,A,B where X,Y are the races that Chef participates in, and A,B are the races that Chef's arch-rival participates in, find the maximum number of gold medals (first place) that Chef can win.


#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int chef1st,chef2nd,rival1st,rival2nd;
        cout<<"Enter first categories chef participate : ";
        cin>>chef1st;
        cout<<"Enter second categories chef participate : ";
        cin>>chef2nd;
        cout<<"Enter first categories chef's rival participate : ";
        cin>>rival1st;
        cout<<"Enter second categories chef's rival participate : ";
        cin>>rival2nd;
        int ans = 0;
        if(chef1st != rival1st && chef1st != rival2nd) ans++;
        if(chef2nd != rival1st && chef2nd != rival2nd) ans++;
        cout<<"The maximum number of gold medals that Chef can win will be : "<<ans<<endl;
    }
}