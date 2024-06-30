// He can break the stick into 2 or more parts such that the parity of length of each part is same. Chef can then continue applying this operation on the smaller sticks he obtains, as many times as he likes. Can Chef obtain a stick of length exactly X by doing this?


#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int original,length;
        // cout<<"Enter the length of stick : ";
        cin>>original;
        // cout<<"Enter the length of stick after breaking it : ";
        cin>>length;

        if(length % 2 == 1 || original % 2 == 0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}