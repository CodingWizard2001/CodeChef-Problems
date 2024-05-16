// A problem setter is called an expert if at least 50% of their problems are approved by Chef. Munchy submitted X problems for approval. If Y problems out of those were approved, find whether Munchy is an expert or not.

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test cases : ";
    cin>>t;
    while(t--){
        int x,y;
        cout<<"Enter no. of problems : ";
        cin>>x;
        cout<<"Enter no. of problems approved : ";
        cin>>y;
        if((y * 100) / x >= 50) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}