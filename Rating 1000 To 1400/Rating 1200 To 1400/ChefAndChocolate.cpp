// Chef has a standard chocolate of n by m pieces. More formally, chocolate is a rectangular plate consisting of n rows and m columns. He has two friends and they will play with this chocolate. First friend takes the chocolate and cuts it into two parts by making either a horizontal or vertical cut. Then, the second friend takes one of the available pieces and divides into two parts by either making a horizontal or vertical cut. Then the turn of first friend comes and he can pick any block of the available chocolates and do the same thing again. The player who cannot make a turn loses. Now Chef is interested in finding which of his friends will win if both of them play optimally. Output "Yes", if the friend who plays first will win, otherwise print "No".




#include <bits/stdc++.h>
using namespace std;

int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int n,m;
        cin>>n>>m;
        
        int d = n * m - 1;
        if(d % 2 != 0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}