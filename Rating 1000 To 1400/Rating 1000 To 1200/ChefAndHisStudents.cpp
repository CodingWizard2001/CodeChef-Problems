// Chef is instructor of the famous course "Introduction to Algorithms" in a famous university. There are n students in his class. There is not enough space in the class room, so students sit in a long hallway in a linear fashion. One day Chef was late to class. As a result, some of the students have formed pairs and are talking to each other, while the others are busy studying. This information is given to you by a string s of length n, consisting of characters '*', <' and '>', where '*' denotes that the student is studying, '>' denotes that the corresponding student is talking to the student to the right, and '<' denotes that the corresponding student is talking to the student to the left. When the students see their teacher coming, those who were talking get afraid and immediately turn around, i.e. students talking to left have now turned to the right, and the one talking to right have turned to the left. When Chef sees two students facing each other, he will assume that they were talking. A student who is busy studying will continue doing so. Chef will call each pair of students who were talking and punish them. Can you find out how many pairs of students will get punished?


#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        string str;
        // cout<<"Enter the string : ";
        cin>>str;
        int count = 0;
        for(int i = 0;i < (str.length() - 1);i++){
            if(str[i] == '<' && str[i + 1] == '>') count++;
        }
        cout<<count<<endl;
    }
}