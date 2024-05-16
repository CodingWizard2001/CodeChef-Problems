// There are N children and Chef wants to give them 1 candy each. Chef already has X candies with him. To buy the rest, he visits a candy shop. In the shop, packets containing exactly 4 candies are available. Determine the minimum number of candy packets Chef must buy so that he is able to give 1 candy to each of the N children.

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test cases : ";
    cin>>t;
    while(t--){
        int n,x;
        cout<<"Enter no. of childrens : ";
        cin>>n;
        cout<<"Enter no. of candies he have : ";
        cin>>x;
        if(x >= n) cout<<0<<endl;
        else{
            if((n - x) % 4 == 0) cout<<((n - x) / 4)<<endl;
            else cout<<((n - x) / 4) + 1<<endl;
        }
    }
}