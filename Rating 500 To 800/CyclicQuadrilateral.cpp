// You are given the sizes of angles of a simple quadrilateral (in degrees) A, B, C and D, in some order along its perimeter. Determine whether the quadrilateral is cyclic.

#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no.of test cases : ";
    cin>>testCase;
    while(testCase--){
        int angle1,angle2,angle3,angle4;
        cout<<"Enter the first angle : ";
        cin>>angle1;
        cout<<"Enter the second angle : ";
        cin>>angle2;
        cout<<"Enter the third angle : ";
        cin>>angle3;
        cout<<"Enter the fourth angle : ";
        cin>>angle4;
        if((angle1 + angle3) == 180){
            if((angle2 + angle4) == 180) cout<<"The quadrilateral is cyclic"<<endl;
            else cout<<"The quadrilateral is not cyclic"<<endl;
        }
        else cout<<"The quadrilateral is not cyclic"<<endl;
    }
}