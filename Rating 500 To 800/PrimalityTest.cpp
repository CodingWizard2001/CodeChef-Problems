// Alice and Bob are meeting after a long time. As usual they love to play some math games. This times Alice takes the call and decides the game. The game is very simple, Alice says out an integer and Bob has to say whether the number is prime or not. Bob as usual knows the logic but since Alice doesn't give Bob much time to think, so Bob decides to write a computer program. Help Bob accomplish this task by writing a computer program which will calculate whether the number is prime or not.


#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int number;
        cout<<"Enter a number : ";
        cin>>number;
        bool flag = false;
        for(int i = 2;i < number;i++){
            if(number % i == 0){
                flag = true;
                break;
            }
        }
        if(flag == true || number == 1) cout<<number<<" is not a prime number"<<endl;
        else cout<<number<<" is a prime number"<<endl;
    }
}