//There are 101 citizens in Chefland. It is election time in Chefland and 3 parties, A,B, and C are contesting the elections. Party A receives XA votes, party B receives XB votes, and party C receives XC votes. The constitution of Chefland requires a particular party to receive a clear majority to form the government. A party is said to have a clear majority if it receives strictly greater than 50 votes.If any party has a clear majority, print the winning party (A, B or C). Otherwise, print NOTA.



#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int voteObtainByA,voteObtainByB,voteObtainByC;
        // cout<<"Enter the no. of votes obtain by party A : ";
        cin>>voteObtainByA;

        // cout<<"Enter the no. of votes obtain by party B : ";
        cin>>voteObtainByB;
        
        // cout<<"Enter the no. of votes obtain by party C : ";
        cin>>voteObtainByC;
        
        if(voteObtainByA > 50 && voteObtainByA > voteObtainByB && voteObtainByA > voteObtainByC) cout<<"A"<<endl;

        else if(voteObtainByB > 50 && voteObtainByB > voteObtainByA && voteObtainByB > voteObtainByC) cout<<"B"<<endl;

        else if(voteObtainByC > 50 && voteObtainByC > voteObtainByA && voteObtainByC > voteObtainByB) cout<<"C"<<endl;

        else cout<<"NOTA"<<endl;
    }
}