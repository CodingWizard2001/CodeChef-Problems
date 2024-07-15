// Chef has a binary string S of size N. Chef can perform the following operation on the string: Select any substring of size 3 and reverse it. Find the minimum distance between any two 1s Chef can achieve, by applying the above operation any (possibly zero) number of times.




#include <bits/stdc++.h>
using namespace std;

int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int n;
        cin>>n;
        
        string s;
        cin>>s;
        
        vector<char> v;
        for(int i = 0;i < n;i++){
            if(s[i] == '1') v.push_back(i);
        }
        
        int c1 = 0,c2 = 0;
        for(int i = 0;i < v.size();i++){
            if(v[i] % 2 == 0) c1++;
            else c2++;
        }
        
        if(c1 > 0 && c2 > 0) cout<<"1"<<endl;
        else cout<<"2"<<endl;
    }
}