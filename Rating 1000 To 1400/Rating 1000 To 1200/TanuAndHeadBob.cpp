// Tanu has got interested in signs and gestures that we use for communication. One such gesture is the head-bob. When we want to signal "Yes" to someone, we move the head up-and-down. For "No", the head is moved left-and-right, rotating about the vertical axis. There is a peculiar way of gesturing "Yes", commonly seen in India, by moving head sideways (rotating about the forward-back axis). This is called the Indian head-bob. Tanu observed many people on the railways station, and made a list of gestures that they made. Usual "Yes" gesture is recorded as "Y", no as "N" and Indian "Yes" gesture as "I". (Assume no foreigner uses the Indian "Yes" gesture and vice-versa). Identify which of them were Indians, which were not Indian, and which one you cannot be sure about.


#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int len;
        // cout<<"Enter the length of the string : ";
        cin>>len;

        string str;
        // cout<<"Enter the string : ";
        cin>>str;
        
        int indian = count(str.begin(),str.end(),'I');
        int nonIndian = count(str.begin(),str.end(),'Y');
        int notSure = count(str.begin(),str.end(),'N');
        
        if(indian >= 1) cout<<"INDIAN"<<endl;
        else if(nonIndian > 0) cout<<"NOT INDIAN"<<endl;
        else cout<<"NOT SURE"<<endl;
    }
}