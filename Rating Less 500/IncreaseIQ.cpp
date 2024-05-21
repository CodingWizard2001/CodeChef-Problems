// A study has shown that playing a musical instrument helps in increasing one's IQ by 7 points. Chef knows he can't beat Einstein in physics, but he wants to try to beat him in an IQ competition. You know that Einstein had an IQ of 170, and Chef currently has an IQ of X. Determine if, after learning to play a musical instrument, Chef's IQ will become strictly greater than Einstein's. Print "Yes" if it is possible for Chef to beat Einstein, else print "No" (without quotes).

#include<iostream>
using namespace std;
int main(){
    int IQ_OfChef;
    cout<<"Enter the IQ of chef : ";
    cin>>IQ_OfChef;
    if((IQ_OfChef + 7) <= 170) cout<<"It is not possible for Chef to beat Einstein in IQ competition"<<endl;
    else cout<<"It is possible for Chef to beat Einstein in IQ competition"<<endl;
}