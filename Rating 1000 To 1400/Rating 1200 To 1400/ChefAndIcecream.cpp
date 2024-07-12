// Chef owns an icecream shop in Chefland named scoORZ. There are only three types of coins in Chefland: Rs. 5, Rs. 10 and Rs. 15. An icecream costs Rs. 5. There are N people (numbered 1 through N) standing in a queue to buy icecream from scoORZ. Each person wants to buy exactly one icecream. For each valid i, the i-th person has one coin with value ai. It is only possible for someone to buy an icecream when Chef can give them back their change exactly. Initially, Chef has no money. He wants to know if he can sell icecream to everyone in the queue, in the given order. Since he is busy eating his own icecream, can you tell him if he can serve all these people?




#include <bits/stdc++.h>
using namespace std;
int main() {
    int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int len;
        // cout<<"Enter the length : ";
        cin>>len;

        int arr[len];
        for(int i = 0;i < len;i++){
            // cout<<"Enter the value for "<<(i + 1)<<"th position : ";
            cin>>arr[i];
        }

        bool flag = true;
        int gain = 0,count5 = 0,count10 = 0;
        
        for(int i = 0;i < len;i++){
            if(arr[i] == 5) count5++;
            
            else if(arr[i] == 10){
                if(count5 > 0){
                    count5--;
                    count10++;
                }
                else{
                    flag = false;
                    break;
                }
            }
            
            else{
                if(count10 > 0) count10--;
                else if(count5 > 1) count5 -= 2;
                else{
                    flag = false;
                    break;
                }
            }
        }
        
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}