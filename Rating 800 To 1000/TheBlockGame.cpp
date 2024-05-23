// The citizens of Byteland regularly play a game. They have blocks each denoting some integer from 0 to 9. These are arranged together in a random manner without seeing to form different numbers keeping in mind that the first block is never a 0. Once they form a number they read in the reverse order to check if the number and its reverse is the same. If both are same then the player wins. We call such numbers palindrome. Ash happens to see this game and wants to simulate the same in the computer. As the first step he wants to take an input from the user and check if the number is a palindrome and declare if the user wins or not. 


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int number;
        cout<<"Enter an number : ";
        cin>>number;
        int temp = number,reverse = 0;
        while(temp != 0){
            int digit = (temp % 10);
            reverse = reverse * 10 + digit;
            temp /= 10;
        }
        if(reverse == number) cout<<number<<" is a Palindrome number"<<endl;
        else cout<<number<<" isn't a Palindrome number"<<endl;
    }
}