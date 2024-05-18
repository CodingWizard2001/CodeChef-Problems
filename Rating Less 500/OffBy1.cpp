// You just bought a new calculator, but it seems to have a small problem: all its results have an extra 1 appended to the end. Given A and B can you predict what the calculator will print when you ask it for A+B?

#include <iostream>
using namespace std;
int main(){
    int value1,value2;
    cout<<"Enter the first value : ";
    cin>>value1;
    cout<<"Enter the second value : ";
    cin>>value2;
    cout<<"The calculator will print : "<<(((value1 + value2) * 10) + 1)<<endl;
}