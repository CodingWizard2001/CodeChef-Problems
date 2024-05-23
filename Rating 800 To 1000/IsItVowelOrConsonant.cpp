// Write a program to take a character (C) as input and check whether the given character is a vowel or a consonant.

#include <iostream>
using namespace std;
int main(){
    char character;
    cout<<"Enter a character : ";
    cin>>character;
    if(character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U') cout<<character<<" is a vowel"<<endl;
    else cout<<character<<" is a consonant"<<endl;
}