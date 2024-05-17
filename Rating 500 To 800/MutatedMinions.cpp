// Gru has not been in the limelight for a long time and is, therefore, planning something particularly nefarious. Frustrated by his minions' incapability which has kept him away from the limelight, he has built a transmogrifier — a machine which mutates minions. Each minion has an intrinsic characteristic value (similar to our DNA), which is an integer. The transmogrifier adds an integer K to each of the minions' characteristic value. Gru knows that if the new characteristic value of a minion is divisible by 7, then it will have Wolverine-like mutations. Given the initial characteristic integers of N minions, all of which are then transmogrified, find out how many of them become Wolverine-like.


#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfMinions,MinionsCharacter;
        cout<<"Enter the no. of minions : ";
        cin>>noOfMinions;
        cout<<"Enter the minion's DNA : ";
        cin>>MinionsCharacter;
        int ans = 0;
        while(noOfMinions--){
            int minionDNA;
            cout<<"Enter the integer value of minion's DNA : ";
            cin>>minionDNA;
            if((minionDNA + MinionsCharacter) % 7 == 0) ans++;
        }
        cout<<"Total no. of minions turn into wolverine will be : "<<ans<<endl;
    }
}