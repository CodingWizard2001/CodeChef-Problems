// There are three cities and thus three EVMs. An insider told Chef that his party got A,B,C votes respectively in these three cities according to the EVMs. Also, the total number of votes cast are P,Q,R respectively for the three cities. Chef, being the party leader, can hack at most one EVM so that his party wins. On hacking a particular EVM all the votes cast in that EVM are counted in favor of Chef's party.A party must secure strictly more than half of the total number of votes cast in order to be considered the winner. Can Chef achieve his objective of winning by hacking at most one EVM?




#include <bits/stdc++.h>
using namespace std;
int main() {
    int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int a,b,c;
        cin>>a>>b>>c;
        
        int p,q,r;
        cin>>p>>q>>r;
        
        int chefVote = (a + b + c);
        int totalVote = (p + q + r);
        
        int requiredVote = (totalVote / 2) + 1;
        
        if(chefVote + (p - a) >= requiredVote || chefVote + (q - b) >= requiredVote || chefVote + (r - c) >= requiredVote) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}