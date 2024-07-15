// Chef had a hard day and want to play little bit. The game is called "Chain". Chef has the sequence of symbols. Each symbol is either '-' or '+'. The sequence is called Chain if each two neighboring symbols of sequence are either '-+' or '+-'. Help Chef to calculate the minimum number of symbols he need to replace (ex. '-' to '+' or '+' to '-') to receive a Chain sequence.




#include <bits/stdc++.h>
using namespace std;

int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        string s;
        cin>>s;
        
        int changes1 = 0,changes2 = 0;
        for(int i = 0;i < s.size();i++){
            if(i % 2 == 0){
                if(s[i] != '+') changes1++;
                if(s[i] != '-') changes2++;
            }
            else{
                if(s[i] != '-') changes1++;
                if(s[i] != '+') changes2++;
            }
        }
        cout<<min(changes1,changes2)<<endl;
    }
}