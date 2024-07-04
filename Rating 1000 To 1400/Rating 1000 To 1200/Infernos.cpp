// Ved started playing a new mobile game called Fighting Clans. An army of N enemies is approaching his base. The ith enemy has Hi health points. An enemy gets killed if his health points become 0. Ved defends his base using a weapon named Inferno. He can set the Inferno to one of the following two modes:

// 1.  Single-Target Mode: In one second, the Inferno can target exactly one living enemy and cause damage of at most X health points.

// 2.  Multi-Target Mode: In one second, the Inferno can target all living enemies and cause damage of 1 health point to each of them.

// Find the minimum time required to kill all the enemies.



#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int len,MaxDamage;

        // cout<<"Enter the length of the array : ";
        cin>>len;

        // cout<<"Enter the maximum damage can done by multi inferno : ";
        cin>>MaxDamage;
        
        int arr[len];
        for(int i = 0;i < len;i++){
            cout<<"Enter the value at "<<(i + 1)<<"th position : ";
            cin>>arr[i];
        }
        
        int singleInferno = 0;
        int multiInferno  = 0;
        for(int i = 0;i < len;i++){
            singleInferno = max(singleInferno,arr[i]);
            multiInferno += ceil(arr[i] / double(MaxDamage));
        }
        
        cout<<min(singleInferno,multiInferno)<<endl;
    }
}