// Two friends, Dragon and Sloth, are writing a computer science examination series. There are three subjects in this series: DSA, TOC, and DM. Each subject carries 100 marks. You know the individual scores of both Dragon and Sloth in all 3 subjects. You have to determine who got a better rank. The rank is decided as follows:

// 1.  The person with a bigger total score gets a better rank
// 2.  If the total scores are tied, the person who scored higher in DSA gets a better rank
// 3.  If the total score and the DSA score are tied, the person who scored higher in TOC gets a better rank
// 4.  If everything is tied, they get the same rank.



#include <bits/stdc++.h>
using namespace std;
int main() {
    int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int DragonDSA,DragonTOC,DragonDm;
        // cout<<"Enter the marks of Dragon in DSA : ";
        cin>>DragonDSA;
        // cout<<"Enter the marks of Dragon in TOC : ";
        cin>>DragonTOC;
        // cout<<"Enter the marks of Dragon in DM : ";
        cin>>DragonDm;

        int slothDSA,slothTOC,slothDm;
        // cout<<"Enter the marks of Sloth in DSA : ";
        cin>>slothDSA;
        // cout<<"Enter the marks of Sloth in TOC : ";
        cin>>slothTOC;
        // cout<<"Enter the marks of Sloth in DM : ";
        cin>>slothDm;
        
        int totalOfSloth = (slothDSA + slothTOC + slothDm);
        int totalOfDragon = (DragonDSA + DragonTOC + DragonDm);
        
        if(totalOfDragon > totalOfSloth) cout<<"Dragon"<<endl;
        else if(totalOfSloth > totalOfDragon) cout<<"Sloth"<<endl;
        else{
            if(slothDSA > DragonDSA) cout<<"Sloth"<<endl;
            else if(slothDSA < DragonDSA) cout<<"Dragon"<<endl;
            else{
                if(slothTOC > DragonTOC) cout<<"Sloth"<<endl;
                else if(slothTOC < DragonTOC) cout<<"Dragon"<<endl;
                else{
                    if(slothDm > DragonDm) cout<<"Sloth"<<endl;
                    else if(slothDm < DragonDm) cout<<"Dragon"<<endl;
                    else cout<<"TIE"<<endl;
                }
            }
        }
    }
}


// Output: 3                 |
//         10 20 30          |
//         30 20 10          |     Sloth
//         5 23 87           |
//         5 23 87           |     TIE
//         0 15 100          |
//         100 5 5           |     Dragon