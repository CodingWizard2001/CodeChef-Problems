// To access CRED programs, one needs to have a credit score of 750 or more. Given that the present credit score is X, determine if one can access CRED programs or not. If it is possible to access CRED programs, output YES, otherwise output NO.

#include <iostream>
using namespace std;
int main(){
    int creditScore;
    cout<<"Enter the credit score : ";
    cin>>creditScore;
    if(creditScore >= 750) cout<<"It is possible to access CRED programs"<<endl;
    else cout<<"It is impossible to access CRED programs"<<endl;
}