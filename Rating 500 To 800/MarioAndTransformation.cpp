// Mario transforms each time he eats a mushroom as follows:

// 1. If he is currently small, he turns normal.
// 2. If he is currently normal, he turns huge.
// 3.If he is currently huge, he turns small.

// Given that Mario was initially normal, find his size after eating X mushrooms.

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test cases : ";
    cin>>t;
    while(t--){
        int mushrooms;
        cout<<"Enter total mushrooms mario eats : ";
        cin>>mushrooms;
        int check = (mushrooms % 3);
        if(check == 0) cout<<"Mario will be small"<<endl;
        else if(check == 1) cout<<"Mario will be normal"<<endl;
        else cout<<"Mario will be huge"<<endl;
    }
}