// In Ciel's restaurant, a waiter is training. Since the waiter isn't good at arithmetic, sometimes he gives guests wrong change. Ciel gives him a simple problem. What is A-B (A minus B) ? Surprisingly, his answer is wrong. To be more precise, his answer has exactly one wrong digit. Can you imagine this? Can you make the same mistake in this problem?



#include <bits/stdc++.h>
using namespace std;
int main() {
    int valueOfA,valueOfB;

    // cout<<"Enter the value of A : ";
    cin>>valueOfA;
    // cout<<"Enter the value of B : ";
    cin>>valueOfB;
    
    int ans = (valueOfA - valueOfB);
    if(ans % 10  == 9) cout<<(ans - 1)<<endl;
    else cout<<(ans + 1)<<endl;
}