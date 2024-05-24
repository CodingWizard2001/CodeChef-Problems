// Write a program to obtain length (L) and breadth (B) of a rectangle and check whether its area is greater or perimeter is greater or both are equal.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int length,breadth;
        cout<<"Enter the length of rectangle : ";
        cin>>length;
        cout<<"Enter the breadth of rectangle : ";
        cin>>breadth;
        int areaOfRectangle = (length * breadth);
        int perimeterOfBreadth = 2 * (length + breadth);
        if(areaOfRectangle == perimeterOfBreadth) cout<<"Area and perimeter are Equal"<<endl<<areaOfRectangle<<endl;
        else if(areaOfRectangle > perimeterOfBreadth) cout<<"Area is greater than perimeter"<<endl<<areaOfRectangle<<endl;
        else cout<<"Perimeter is greater than area"<<endl<<areaOfRectangle<<endl;
    }
}