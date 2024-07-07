// Alice likes all the numbers which are divisible by A. Bob does not like the numbers which are divisible by B and likes all the remaining numbers. Determine the smallest number greater than or equal to N which is liked by both Alice and Bob. Output -1 if no such number exists.



#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        long long a,b,n;
        cin>>a>>b>>n;
        
        if(a % b == 0) cout<<-1<<endl;
        else{
           long long ans = n;
           if(ans % a != 0) ans = ((ans / a) + 1) * a;
           while(ans % b == 0) ans += a;
           cout<<ans<<endl;
        }
    }
}