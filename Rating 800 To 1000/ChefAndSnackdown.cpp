// Chef is interested in the history of SnackDown contests. He needs a program to verify if SnackDown was hosted in a given year. SnackDown was hosted by CodeChef in the following years: 2010, 2015, 2016, 2017 and 2019.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int givenYear;
        cout<<"Enter the year : ";
        cin>>givenYear;
        if(givenYear == 2010 || givenYear == 2015 || givenYear == 2016 || givenYear == 2017 || givenYear == 2019) cout<<"SnackDown was hosted"<<endl;
        else cout<<"SnackDown wasn't hosted"<<endl;
    }
}