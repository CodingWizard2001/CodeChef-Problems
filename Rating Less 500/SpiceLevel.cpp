// Each item in Chef’s menu is assigned a spice level from 1 to 10. Based on the spice level, the item is categorized as:

// 1.  MILD: If the spice level is less than 4.
// 2.  MEDIUM: If the spice level is greater than equal to 4 but less than 7.
// 3.  HOT: If the spice level is greater than equal to 7.

// Given that the spice level of an item is X, find the category it lies in.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int spiceLevel;
        cout<<"Enter the spice level : ";
        cin>>spiceLevel;
        if(spiceLevel < 4) cout<<"Spice Level : Mild"<<endl;
        else if(spiceLevel >= 4 && spiceLevel < 7) cout<<"Spice Level : Medium"<<endl;
        else cout<<"Spice Level : Hot"<<endl;
    }
}