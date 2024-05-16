// In olden days finding square roots seemed to be difficult but nowadays it can be easily done using in-built functions available across many languages .Assume that you happen to hear the above words and you want to give a try in finding the square root of any given integer using in-built functions. So here's your chance.

#include<iostream>
#include <math.h>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test cases : ";
    cin>>t;
    while(t--){
        int x;
        cout<<"Enter the value of x : ";
        cin>>x;
        cout<<"Square root of "<<x<<" will be : "<<int(sqrt(x))<<endl;
    }
}