// For each bill you pay using CRED, you earn X CRED coins. At CodeChef store, each bag is worth 100 CRED coins. Chef pays Y number of bills using CRED. Find the maximum number of bags he can get from the CodeChef store.

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test-cases : ";
    cin>>t;
    while(t--){
        int x,y;
        cout<<"Enter no. of CRED coins : ";
        cin>>x;
        cout<<"Enter no. of bills using CRED : ";
        cin>>y;
        cout<<"The maximum number of bags he can get from the CodeChef store : "<<(x * y) / 100<<endl;
    }
}