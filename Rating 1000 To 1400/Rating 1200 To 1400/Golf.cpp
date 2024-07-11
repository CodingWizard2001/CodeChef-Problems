// It's a lockdown. You’re bored in your house and are playing golf in the hallway. The hallway has N + 2 tiles numbered from 0 to N + 1 from left to right. There is a hole on tile number x. You hit the ball standing on tile 0. When you hit the ball, it bounces at lengths of k, i.e. the tiles covered by it are 0,k,2k,…, and so on until the ball passes tile N+1. If the ball doesn't enter the hole in the first trial, you try again but this time standing on the tile N+1. When you hit the ball, it bounces at lengths of k, i.e. the tiles covered by it are (N + 1),(N + 1 − k),(N + 1 − 2k),…, and so on until the ball passes tile 0. Find if the ball will enter the hole, either in its forward journey or backward journey.




#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        long long n,x,k;
        cin>>n>>x>>k;
        
        if((x % k == 0) || (n + 1 - x) % k == 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}