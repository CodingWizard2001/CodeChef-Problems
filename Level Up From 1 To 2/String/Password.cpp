// Chef is planning to setup a secure password for his Codechef account. For a password to be secure the following conditions should be satisfied:

// 1. Password must contain at least one lower case letter 
// [a - z];
// 2. Password must contain at least one upper case letter [A - Z] strictly inside (first or the last character won’t be considered)
// 3. Password must contain at least one digit [0 - 9] strictly inside;
// 4. Password must contain at least one special character from the set { '@', '#', '%', '&', '?' } strictly inside;
// 5. Password must be at least 10 characters in length, but it can be longer.

// Chef has generated several strings and now wants you to check whether the passwords are secure based on the above criteria. Please help Chef in doing so.



#include <iostream>
#include <string>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        string password;
        cout<<"Enter the password : ";
        cin>>password;
        
        bool checkForSmallCharacter = false;
        bool checkForCapitalCharacter = false;
        bool checkForNumber = false;
        bool checkForSpecialCharacter = false;

        for(int i = 0;i < password.length();i++){
            if(password[i] >= 'a' && password[i] <= 'z') checkForSmallCharacter = true;

            else if(password[i] >= 'A' && password[i] <= 'Z'){
                if(i != 0 && i != (password.length() - 1)) checkForCapitalCharacter = true;
            }

            else if(password[i] >= '1' && password[i] <= '9'){
                if(i != 0 && i != (password.length() - 1)) checkForNumber = true;
            }

            else if(password[i] == '@' || password[i] == '#' || password[i] == '%' || password[i] == '&' || password[i] == '?'){
                if(i != 0 && i != (password.length() - 1)) checkForSpecialCharacter = true;
            }
        }

        if(checkForCapitalCharacter == true && checkForSmallCharacter == true && checkForNumber == true && checkForSpecialCharacter == true && password.length() >= 10) cout<<password<<" is valid"<<endl;

        else cout<<password<<" is not valid"<<endl;
    }
}