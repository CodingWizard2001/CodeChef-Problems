// There are N cards on a table, out of which X cards are face-up and the remaining are face-down. In one operation, we can do the following: Select any one card and flip it (i.e. if it was initially face-up, after the operation, it will be face-down and vice versa). What is the minimum number of operations we must perform so that all the cards face in the same direction (i.e. either all are face-up or all are face-down)?

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test cases : ";
    cin>>t;
    while(t--){
        int noOfCards,faceUp;
        cout<<"Enter no. of cards : ";
        cin>>noOfCards;
        cout<<"Enter no. of cards are present as face up : ";
        cin>>faceUp;
        int faceDown = (noOfCards - faceUp);
        if(faceUp == 0 || faceDown == 0 || noOfCards == faceUp) cout<<"The minimum number of operations are required : "<<0<<endl;
        else if(faceDown > faceUp) cout<<"The minimum number of operations are required : "<<faceUp<<endl;
        else cout<<"The minimum number of operations are required : "<<faceDown<<endl;
    }
}