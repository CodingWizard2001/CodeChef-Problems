// Alice is driving from her home to her office which is A kilometers away and will take her X hours to reach.Bob is driving from his home to his office which is B kilometers away and will take him Y hours to reach. Determine who is driving faster, else, if they are both driving at the same speed print EQUAL.


#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int distanceOfAlice,timeTakenByAlice,distanceOfBob,timeTakenByBob;
        cout<<"Enter the distance of Alice's office : ";
        cin>>distanceOfAlice;
        cout<<"Enter the time taken by Alice to reach : ";
        cin>>timeTakenByAlice;
        cout<<"Enter the distance of Bob's office : ";
        cin>>distanceOfBob;
        cout<<"Enter the time taken by Bob to reach : ";
        cin>>timeTakenByBob;
        float speedOfAlice = (distanceOfAlice / float(timeTakenByAlice));
        float speedOfBob = (distanceOfBob / float(timeTakenByBob));
        if(speedOfAlice == speedOfBob) cout<<"They are going equal speed"<<endl;
        else if(speedOfAlice < speedOfBob) cout<<"Bob's speed is faster then Alice"<<endl;
        else cout<<"Alice's speed is faster then Bob"<<endl;
    }
}