// The Chessboard Distance for any two points (x1,x2) &(y1,y2) on a Cartesian plane is defined as max(|x1 - x2|, |y1 - y2|). You are given two points (x1,x2) &(y1,y2). Output their Chessboard Distance.

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test cases : ";
    cin>>t;
    while(t--){
        int x1,y1,x2,y2;
        cout<<"Enter the value of x1 : ";
        cin>>x1;
        cout<<"Enter the value of y1 : ";
        cin>>y1;
        cout<<"Enter the value of x2 : ";
        cin>>x2;
        cout<<"Enter the value of y2 : ";
        cin>>y2;
        cout<<"Distance of chess board : "<<max(abs(x1 - x2),abs(y1 - y2))<<endl;
    }
}