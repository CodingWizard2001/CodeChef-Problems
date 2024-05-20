// Chef has a rectangular plate of length N cm and width M cm. He wants to make a wire-frame around the plate. The wire-frame costs X rupees per cm. Determine the cost Chef needs to incur to buy the wire-frame.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int length,width,cost;
        cout<<"Enter the length of wire-frames : ";
        cin>>length;
        cout<<"Enter the width of wire-frames : ";
        cin>>width;
        cout<<"Enter the cost of wire-frames : ";
        cin>>cost;
        cout<<"The cost Chef needs to incur to buy the wire-frame will be : "<<((length * 2) + (width * 2)) * cost<<endl;
    }
}