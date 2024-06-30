// Chef recently graduated Computer Science in university, so he was looking for a job. He applied for several job offers, but he eventually settled for a software engineering job at ShareChat. Chef was very enthusiastic about his new job and the first mission assigned to him was to implement a message encoding feature to ensure the chat is private and secure. Chef has a message, which is a string S with length N containing only lowercase English letters. It should be encoded in two steps as follows 

// 1.  Swap the first and second character of the string 
// S, then swap the 3rd and 4th character, then the 5th and 6th character and so on. If the length of S is odd, the last character should not be swapped with any other.

// 2.  Replace each occurrence of the letter 'a' in the message obtained after the first step by the letter 'z', each occurrence of 'b' by 'y', each occurrence of 'c' by 'x', etc, and each occurrence of 'z' in the message obtained after the first step by 'a'.

// The string produced in the second step is the encoded message. Help Chef and find this message.



#include <bits/stdc++.h>
using namespace std;
int main() {
    int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int size;
        // cout<<"Enter the size of the array : ";
        cin>>size;

        string str;
        // cout<<"Enter the string : ";
        cin>>str;

        // First Swap
        for(int i = 0;i < (size - 1);i++){
            swap(str[i],str[i + 1]);
        }

        // Second Encode
        int temp;
        for(int i = 0;i < size;i++){
            temp = 0;
            if(str[i] <= 109){
                temp = int(str[i]) - 97;
                str[i] = char(122 - temp);
            }
            else if(str[i] >= 110){
                temp = 122 - int(str[i]);
                str[i] = char(97 + temp);
            }
        }
        // cout<<"Encoded message will be : ";
        cout<<str<<endl;
    }
}