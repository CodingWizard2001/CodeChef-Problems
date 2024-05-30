// Not everyone probably knows that Chef has younger brother Jeff. Currently Jeff learns to read. He knows some subset of the letter of Latin alphabet. In order to help Jeff to study, Chef gave him a book with the text consisting of N words. Jeff can read a word if it consists only of the letters he knows. Now Chef is curious about which words his brother will be able to read, and which are not. Please help him!


#include <iostream>
#include <string>
#include<set>
using namespace std;
int main(){
    string knowWord;
    cout<<"Enter the known word by Jeff : ";
    cin>>knowWord;

    int noOfWords;
    cout<<"Enter the no. of words in the book : ";
    cin>>noOfWords;

    // <---------- Approach - 1 ----------->
    // while(noOfWords--){
    //     string givenWord;
    //     cout<<"Enter the word printed in the book : ";
    //     cin>>givenWord;

    //     int count = 0;
    //     for(int i = 0;i < knowWord.length();i++){
    //         for(int j = 0;j < givenWord.length();j++){
    //             if(knowWord[i] == givenWord[j]) count++;
    //         }
    //     }

    //     if(count == knowWord.length()) cout<<"Yes, his brother will be able to read"<<endl;
    //     else cout<<"No, his brother will not be able to read"<<endl;
    // }

    // <---------- Approach - 2 ----------->
    set<char> know(knowWord.begin(),knowWord.end());

    while(noOfWords--){
        string givenWord;
        cout<<"Enter the word printed in the book : ";
        cin>>givenWord;

        bool flag = true;

        for(const char ch : givenWord){
            if(know.find(ch) == know.end()){
                flag = false;
                break;
            }
        }

        if(flag == true) cout<<"Yes, his brother will be able to read"<<endl;

        else cout<<"No, his brother will not be able to read"<<endl;
    }
}