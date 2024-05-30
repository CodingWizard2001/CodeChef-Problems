// Lately, Chef has been inspired by the "pawri" meme. Therefore, he decided to take a string S and change each of its substrings that spells "party" to "pawri". Find the resulting string.


#include <iostream>
#include <string>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        string str;
        cout<<"Enter any string : ";
        cin>>str;

        for(int i = 0;i < str.length();i++){
            if(str.substr(i,5) == "party") str.replace(i,5,"pawri");
        }

        cout<<"After modifing : "<<str<<endl;
    }
}