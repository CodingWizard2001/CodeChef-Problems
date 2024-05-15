// Each pizza consists of 4 slices. There are N friends and each friend needs exactly X slices. Find the minimum number of pizzas they should order to satisfy their appetite.

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test-cases : ";
    cin>>t;
    while(t--){
        int x,y;
        cout<<"Enter no. of friends : ";
        cin>>x;
        cout<<"Enter no. of pizza slices : ";
        cin>>y;
        if((x * y) % 4 == 0) cout<<"No. of pizzas required : "<<((x * y) / 4)<<endl;
        else cout<<"No. of pizzas required : "<<((x * y) / 4) + 1<<endl; 
    }
}