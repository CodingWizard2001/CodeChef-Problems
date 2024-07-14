// You are given a positive integer X. Your task is to tell whether there exist two positive integers a and b (a > 0,b > 0) such that 2 ⋅ a + 2 ⋅ b + a ⋅ b = X. If there exist positive integers a and b satisfying the above condition print YES, otherwise print NO.




#include <bits/stdc++.h>
using namespace std;

int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        long long num;
        // cout<<"Enter a number : ";
        cin>>num;

        if(num < 5) cout<<"NO"<<endl;
        else{
            int flag = 0;
            for(int i = 1;i < sqrt(num);i++){
                if((num - (2 * i)) % (i + 2) == 0){
                    flag = 1;
                    break;
                }
            }
            if(flag == 0) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
}