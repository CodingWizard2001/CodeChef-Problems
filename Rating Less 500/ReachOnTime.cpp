// Chef has recently moved into an apartment. It takes 30 minutes for Chef to reach office from the apartment. Chef left for the office X minutes before Chef was supposed to reach. Determine whether or not Chef will be able to reach on time.

#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int leftOffice;
        cout<<"Enter the value when he left office : ";
        cin>>leftOffice;
        if(leftOffice >= 30) cout<<"Chef will be able to reach on time"<<endl;
        else cout<<"Chef will not be able to reach on time"<<endl;
    }
}