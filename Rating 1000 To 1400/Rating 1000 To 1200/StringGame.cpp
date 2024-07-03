// Alice and Bob are playing a game. They have a common string S of length N. The players also have their individual strings A (belonging to Alice) and B (belonging to Bob) which are empty in the beginning. Game begins with Alice and both players take alternate turns. In her/his turn, the player picks a single character from string S, adds it to the end of their individual string and deletes the picked character from string S. The game continues until string S is empty. Find whether there exists a sequence of moves such that the strings A and B are same at the end of the game.


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
        vector<int>count(26,0);
        if(len % 2 != 0) cout<<"No"<<endl;
        else{
            for(int i = 0;i < len;i++){
                count[str[i] - 'a']++;
            }
            bool flag = true;
            for(int i = 0;i < 26;i++){
                if(count[i] % 2 == 1){
                    flag = false;
                    break;
                }
            }
            if(flag) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
}