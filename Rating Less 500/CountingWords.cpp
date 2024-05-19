// Harsh was recently gifted a book consisting of N pages. Each page contains exactly M words printed on it. As he was bored, he decided to count the number of words in the book. Help Harsh find the total number of words in the book.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int pageNo,wordNo;
        cout<<"Enter the total page no of the book : ";
        cin>>pageNo;
        cout<<"Enter the no. of words present in each page : ";
        cin>>wordNo;
        cout<<"The total number of words in the book are : "<<(pageNo * wordNo)<<endl;
    }
}