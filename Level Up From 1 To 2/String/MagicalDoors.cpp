// Chef wants to cross a hallway of N doors. These N doors are represented as a string. Each door is initially either open or close, represented by 1 or 0 respectively. Chef is required to go through all the doors one by one in the order that they appear, starting from the leftmost door and moving only rightwards at each step. To make the journey easier, Chef has a magic wand, using which Chef can flip the status of all the doors at once. Determine the minimum number of times Chef has to use this wand to cross the hallway of doors.


#include <iostream>
#include <string>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        string doors;
        cout<<"Enter the doors representation  : ";
        cin>>doors;

        int useWand = 0;
        for(int i = 0;i < doors.length();i++){
            if(doors[i] != doors[i + 1]) useWand++;
        }
        doors[0] == '0' ? cout<<"The minimum number of times Chef has to use this wand to cross the hallway of doors will be : "<<useWand<<endl : cout<<"The minimum number of times Chef has to use this wand to cross the hallway of doors will be : "<<(useWand - 1)<<endl;
    }
}