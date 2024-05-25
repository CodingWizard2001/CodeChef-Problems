// You are given an integer N. Find the largest integer between 1 and 10 (inclusive) which divides N.

#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter a number : ";
    cin>>number;
    int ans = 0;
    for(int i = 1;i <= 10;i++){
        if(number % i == 0) ans = i;
    }
    cout<<"The largest integer between 1 and 10 (inclusive) which divides "<<number<<" will be : "<<ans<<endl;
}