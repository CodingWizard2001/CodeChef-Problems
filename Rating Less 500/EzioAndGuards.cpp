// Ezio can manipulate at most X number of guards with the apple of eden. Given that there are Y number of guards, predict if he can safely manipulate all of them.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int maxOfGuards,noOfGuards;
        cout<<"Enter the maximum of guards Ezio can manipulate : ";
        cin>>maxOfGuards;
        cout<<"Enter the no. of guards : ";
        cin>>noOfGuards;
        if(maxOfGuards < noOfGuards) cout<<"He can't safely manipulate all of them"<<endl;
        else cout<<"He can safely manipulate all of them"<<endl;
    }
}