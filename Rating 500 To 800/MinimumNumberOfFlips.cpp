// Chef has an array A of length N consisting of 1 and - 1 only. In one operation, Chef can choose any index i (1 ≤i ≤N) and multiply the element Ai by -1. Find the minimum number of operations required to make the sum of the array equal to 0. Output -1 if the sum of the array cannot be made 0.


#include<iostream>
#include<vector>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int length;
        cout<<"Enter the length of the array : ";
        cin>>length;
        vector<int>v;
        cout<<"Give input : ";
        for(int i = 0;i < length;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        int plus = 0,minus = 0;
        for(int i = 0;i < length;i++){
            if(v[i] == 1) plus++;
            else minus--;
        }
        if(length % 2 != 0) cout<<"Sum can't be 0"<<endl;
        else if(plus > minus) cout<<"No. of operation required : "<<(plus - minus) / 2<<endl;
        else cout<<"No. of operation required : "<<(minus - plus) / 2<<endl;
    }
}