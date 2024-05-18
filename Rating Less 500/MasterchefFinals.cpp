// Chef has been working hard to compete in MasterChef. He is ranked X out of all contestants. However, only 10 contestants would be selected for the finals. Check whether Chef made it to the top 10 or not?


#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int rank;
        cout<<"Enter the chef's rank : ";
        cin>>rank;
        if(rank <= 10) cout<<"Yes chef would be selected for the finals"<<endl;
        else cout<<"No chef would not be selected for the finals"<<endl;
    }
}