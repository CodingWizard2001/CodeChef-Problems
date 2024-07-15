// Chef owns N cats (numbered 1 through N) and he wants to feed them. There are M identical cans of cat food; each can must be used to feed exactly one cat and Chef can only feed one cat at a time. Chef wrote down the order in which he wants to feed the cats: a sequence A1,A2,…,AM. An order of feeding cats is fair if there is no moment where Chef feeds a cat that has already been fed strictly more times than some other cat. Help Chef — tell him if the order in which he wants to feed the cats is fair.




#include <bits/stdc++.h>
using namespace std;

int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int n,m;
        cin>>n>>m;
        
        int arr[m];
        unordered_map<int,int>mp;
        for(int i = 0;i < m;i++) cin>>arr[i];
        
        for(int i = 1;i <= n;i++) mp[i] = 0;
        
        bool flag = true;
        for(int i = 0;i < m;i++){
            mp[arr[i]]++;
            for(auto p : mp){
                if(abs(mp[arr[i]] - p.second) > 1){
                    flag = false;
                    break;
                }
            }
            if(flag == false) break;
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}