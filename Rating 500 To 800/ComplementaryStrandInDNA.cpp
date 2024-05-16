// You are given the sequence of Nucleotides of one strand of DNA through a string S of length N. S contains the character A,T,C, and G only. Chef knows that:

// 1. A is complementary to T.
// 2. T is complementary to A.
// 3. C is complementary to G.
// 4. G is complementary to C.

// Using the string S, determine the sequence of the complementary strand of the DNA.


#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test cases : ";
    cin>>t;
    while(t--){
        int length;
        cout<<"Enter the length of the string : ";
        cin>>length;
        string str;
        cout<<"Enter the string of DNA : ";
        cin>>str;
        string ans = "";
        for(int i = 0;i < length;i++){
            if(str[i] == 'A') ans += 'T';
            else if(str[i] == 'T') ans += 'A';
            else if(str[i] == 'G') ans += 'C';
            else ans += 'G';
        }
        cout<<"Complementary DNA will be : "<<ans<<endl;
    }
}