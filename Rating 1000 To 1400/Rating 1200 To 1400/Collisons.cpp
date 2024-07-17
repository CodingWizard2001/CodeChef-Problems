// Once N boys and M girls attended a party. You are given a matrix A of N rows and M columns where Aij is 1 if the i-th boy likes the j-th girl, otherwise it will be 0. Note that it is not necessary that if a boy x likes girl y, then girl y should like boy x. You know that if there are two different boys x and y, who both like girl z, then there will be a collision. Can you calculate the number of different collisions at this party?




#include <bits/stdc++.h>
using namespace std;
int main() {
    int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int n,m;
        cin>>n>>m;
        
        string s[n];
        for(int i = 0;i < n;i++) cin>>s[i];
        
        int collision = 0;
        
        vector<int>v;
        for(int i = 0;i < m;i++){
            int c = 0;
            for(int j = 0;j < n;j++){
                if(s[j][i] == '1') ++c;
            }
            if(c > 1) collision += c * (c - 1) / 2;
        }
        cout<<collision<<endl;
    }
}