// You have three shoes of the same size lying around. Each shoe is either a left shoe (represented using 0) or a right shoe (represented using 1). Given A,B,C, representing the information for each shoe, find out whether you can go out now, wearing one left shoe and one right shoe.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int shoeType1,shoeType2,shoeType3;

        cout<<"Enter the shoe type for first shoe : ";
        cin>>shoeType1;

        cout<<"Enter the shoe type for second shoe : ";
        cin>>shoeType2;

        cout<<"Enter the shoe type for third shoe : ";
        cin>>shoeType3;

        if(shoeType1 == shoeType2 && shoeType1 == shoeType3 && shoeType2 == shoeType3) cout<<"You can't go out now"<<endl;
        else cout<<"You can go out now"<<endl;
    }
}