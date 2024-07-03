// Chef recently learned about ratios and proportions. He wrote some positive integers a, b, c, d on a paper. Chef wants to know whether he can shuffle these numbers so as to make some proportion? Formally, four numbers x, y, z, w are said to make a proportion if ratio of x : y is same as that of z : w.


#include <bits/stdc++.h>
using namespace std;
int main() {
    int valueOfA,valueOfB,valueOfC,valueOfD;
    // cout<<"Enter the value of A : ";
    cin>>valueOfA;

    // cout<<"Enter the value of B : ";
    cin>>valueOfB;
    
    // cout<<"Enter the value of C : ";
    cin>>valueOfC;
    
    // cout<<"Enter the value of D : ";
    cin>>valueOfD;

    if((valueOfA * valueOfB) == (valueOfC * valueOfD) || (valueOfA * valueOfC) == (valueOfB * valueOfD) || (valueOfA * valueOfD) == (valueOfB * valueOfC)) cout<<"Possible"<<endl;
    
    else cout<<"Impossible"<<endl;
}
