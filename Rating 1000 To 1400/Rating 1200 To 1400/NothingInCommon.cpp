// Alice has quarreled with Berta recently. Now she doesn't want to have anything in common with her! Recently, they've received two collections of positive integers. The Alice's integers were A1, A2, ..., AN, while Berta's were B1, B2, ..., BM. Now Alice wants to throw away the minimal amount of number from her collection so that their collections would have no common numbers, i.e. there won't be any number which is present in both collections. Please help Alice to find the minimal amount of numbers she would need to throw away.




#include <bits/stdc++.h>
using namespace std;

int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int size1,size2;
        cin>>size1>>size2;
        
        int alice[size1];
         unordered_set<int> bertaSet;
        
        for(int i = 0;i < size1;i++) cin>>alice[i];
        for (int i = 0; i < size2; i++) {
            int x;
            cin >> x;
            bertaSet.insert(x);
        }
        
        int count = 0;
        for(int i = 0;i < size1;i++){
            if(bertaSet.find(alice[i]) != bertaSet.end()) ++count;
        }
        cout<<count<<endl;
    }
}