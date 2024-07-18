// Yesterday, Chef found K empty boxes in the cooler and decided to fill them with apples. He ordered N apples, where N is a multiple of K. Now, he just needs to hire someone who will distribute the apples into the boxes with professional passion. Only two candidates passed all the interviews for the box filling job. In one minute, each candidate can put K apples into boxes, but they do it in different ways: the first candidate puts exactly one apple in each box, while the second one chooses a random box with the smallest number of apples and puts K apples in it. Chef is wondering if the final distribution of apples can even depend on which candidate he hires. Can you answer that question?




#include <bits/stdc++.h>
using namespace std;

int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        long long n,k;
        cin>>n>>k;
        if((n / k) % k == 0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}