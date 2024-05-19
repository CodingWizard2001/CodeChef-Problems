// Chef has started studying for the upcoming test. The textbook has N pages in total. Chef wants to read at most X pages a day for Y days. Find out whether it is possible for Chef to complete the whole book.

#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfPages,noOfPageChefRead,completeDay;
        cout<<"Enter the no. of page the textbook have : ";
        cin>>noOfPages;
        cout<<"Enter the no. of page chef read can per day : ";
        cin>>noOfPageChefRead;
        cout<<"Enter the no. of days Chef need to complete the textbook : ";
        cin>>completeDay;
        float timeToComplete = (noOfPages / float(noOfPageChefRead));
        if(timeToComplete <= completeDay) cout<<"It is possible for Chef to complete the whole book"<<endl;
        else cout<<"It is impossible for Chef to complete the whole book"<<endl;
    }
}