// Chef categorizes an instagram account as spam, if, the following count of the account is more than 10 times the count of followers. Given the following and follower count of an account as X and Y respectively, find whether it is a spam account.

#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int followingAccount,followerAccount;
        cout<<"Enter the count of following : ";
        cin>>followingAccount;
        cout<<"Enter the count of follower : ";
        cin>>followerAccount;
        if((followerAccount * 10) >= followingAccount) cout<<"No, it is not a spam account"<<endl;
        else cout<<"It is a spam account"<<endl;
    }
}