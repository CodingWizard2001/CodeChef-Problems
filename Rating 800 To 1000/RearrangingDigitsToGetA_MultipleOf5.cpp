// Given a positive integer N, MoEngage wants you to determine if it is possible to rearrange the digits of N (in decimal representation) and obtain a multiple of 5.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int length;

        cout<<"Enter the length : ";
        cin>>length;

        string number;
        cout<<"Enter the number : ";
        cin>>number;

        bool flag = false;

        for(int i = 0;i < length;i++){
            if(number[i] == '0' || number[i] == '5'){
                flag = true;
                break;
            }
        }

        if(flag == true) cout<<"It is possible to rearrange the digits of "<<number<<" and obtain a multiple of 5"<<endl;

        else cout<<"It is impossible to rearrange the digits of "<<number<<" and obtain a multiple of 5"<<endl;
    }
}