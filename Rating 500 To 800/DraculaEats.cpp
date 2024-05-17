// There are N spooky days left until Halloween. Dracula dines at a mysterious restaurant that changes its spooky menu daily. He particularly enjoys what they serve on Tuesday. Today is Monday, so he wishes to calculate how many times he can indulge in his favourite menu in the next N days (including today) before Halloween.


#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no.of test cases : ";
    cin>>testCase;
    while(testCase--){
        int days;
        cout<<"Enter the day no. : ";
        cin>>days;
        if(days <= 1) cout<<"He can indulge in his favourite menu in the next "<<days<<" days before Halloween will be : "<<0<<endl;
        else cout<<"He can indulge in his favourite menu in the next "<<days<<" days before Halloween will be : "<<((days - 1 + 6) / 7)<<endl;
    }
}