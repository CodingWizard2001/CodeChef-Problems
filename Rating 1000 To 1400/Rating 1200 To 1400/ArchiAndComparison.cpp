// Danya gave integers a, b and n to Archi. Archi wants to compare a^n and b^n. Help Archi with this task.




#include <bits/stdc++.h>
using namespace std;

int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        long long a,b,n;
        cin>>a>>b>>n;
        if(n % 2 == 0){
            if(abs(a) > abs(b)) cout<<1<<endl;
            else if(abs(a) == abs(b)) cout<<0<<endl;
            else cout<<2<<endl;
        }

        else{
            if(a > b) cout<<1<<endl;
            else if(a == b) cout<<0<<endl;
            else cout<<2<<endl;
        }
    }
}