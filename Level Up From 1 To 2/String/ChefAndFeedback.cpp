// Lots of geeky customers visit our chef's restaurant everyday. So, when asked to fill the feedback form, these customers represent the feedback using a binary string (i.e a string that contains only characters '0' and '1'. Now since chef is not that great in deciphering binary strings, he has decided the following criteria to classify the feedback as Good or Bad : If the string contains the substring "010" or "101", then the feedback is Good, else it is Bad. Note that, to be Good it is not necessary to have both of them as substring. So given some binary strings, you need to output whether according to the chef, the strings are Good or Bad.


#include <iostream>
#include <string>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        string feedback;
        cout<<"Enter the feedback : ";
        cin>>feedback;

        // <-------- 1st Approach ------------>
        // bool flag = false;
        // for(int i = 0;i < feedback.length();i++){
        //     if(feedback.substr(i,3) == "101" || feedback.substr(i,3) == "010"){
        //         flag = true;
        //         break;
        //     }
        // }
        // if(flag == true) cout<<"Feedback is Good"<<endl;
        // else cout<<"Feedback is Bad"<<endl;

        // <-------- 2nd Approach ------------>
        int idx = 0;
        bool flag = false;
        while(idx < (feedback.length() - 2)){
            if(feedback[idx] != feedback[idx + 1] && feedback[idx + 1] != feedback[idx + 2]) flag = true;
            idx++;
        }
        if(flag == true) cout<<"Feedback is Good"<<endl;
        else cout<<"Feedback is Bad"<<endl;
    }
}