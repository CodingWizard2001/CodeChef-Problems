// Write a program that takes in a letterclass ID of a ship and display the equivalent string class description of the given ID. Use the table below.

// Class ID	            Ship Class
//  B or b	            BattleShip
//  C or c	              Cruiser
//  D or d	             Destroyer
//  F or f	              Frigate


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        char character;
        cout<<"Enter a character : ";
        cin>>character;
        if(character == 'b' ||  character == 'B') cout<<"Ship Class : Battle Ship"<<endl;
        else if(character == 'c' ||  character == 'C') cout<<"Ship Class : Cruiser"<<endl;
        else if(character == 'd' ||  character == 'D') cout<<"Ship Class : Destroyer"<<endl;
        else if(character == 'f' ||  character == 'F') cout<<"Ship Class : Frigate"<<endl;
    }
}